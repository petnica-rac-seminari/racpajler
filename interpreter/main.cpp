#include <vector>
#include <string>
#include <map>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <omp.h>
#include <exception>
#include <stdexcept>

using namespace std;


class Instruction {

    public:
        string name;
        vector<string> params;

        Instruction(string _name) {
            name = _name;
            params = {};
        }
};

int strToInt(string val) 
{
    /* funkcija prebacuje broj iz tipa string
    u tip int */

    reverse(val.begin(), val.end());

    int res = 0;
    int pow = 1;
    for (int i = 0; i < (int)val.size(); i++) {
        res += pow * (val[i] - '0');
        pow *= 10;
    }

    return res;
}

vector<Instruction> load() 
{
    ifstream in("bin/input.ir");

    vector<string> tokens;
    vector<Instruction> ins;
    
    // parsiranje linije
    string line = "";
    while(getline(in, line)) {

        if (line == "") continue;

        // razbijamo liniju u tokene
        string token = "";
        for (int i = 0; i < (int)line.size(); i++) {
            if (line[i] == ' ') {
                tokens.push_back(token);
                token = "";
            }
            else token += line[i];
        }
        if (token != "") tokens.push_back(token);

        // pravimo instrukciju od tokena
        Instruction temp(tokens[0]);
        for (int i = 1; i < (int)tokens.size(); i++) {
            temp.params.push_back(tokens[i]);
        }

        ins.push_back(temp);
        tokens.clear();
    }

    in.close();
    return ins;
}

int main()
{

    vector<Instruction> instructions = load();
    map<string, vector<int>> vectorTable;

    for (Instruction &curr : instructions) {
        if (curr.name == "init") {
            /* inicijalizuje vektor */
            // params[0] - ime vektora
            // params[1] - duzina vektora
            // params[2] - ':'
            // params[3...n] - elementi vektora

            string var = curr.params[0];

            vector<int> data(strToInt(curr.params[1]));
            for (int i = 3; i < (int)curr.params.size(); i++) {
                data[i - 3] = strToInt(curr.params[i]);
            }

            vectorTable[var] = data;
        }
        else if (curr.name == "add") {
            /* sabira dva vektora */
            string a = curr.params[0], b = curr.params[1], store = curr.params[2];

            if (vectorTable[a].size() != vectorTable[b].size()) {
                cout << "GRESKA: sabiranje vektora koji nisu iste velicine\n";
                continue;
            }

            #pragma omp parallel for
            for(int i = 0; i < (int)vectorTable[a].size(); i++){
                vectorTable[store][i] = vectorTable[a][i] + vectorTable[b][i];
            }
        }
        else if (curr.name == "mul") {
            /* mnozi vektor skalarom */
            string a = curr.params[0], store = curr.params[2];
            int k = vectorTable[curr.params[1]][0];

            if(vectorTable[a].size() != vectorTable[store].size()) {
                cout << "GRESKA: vektor A i vektor za rezultat nisu iste velicine\n";
                continue;
            } 
            
            #pragma omp parallel for
            for(int i = 0; i < vectorTable[a].size(); i++){
                vectorTable[store][i] = vectorTable[a][i] * k;
            }
        }
        else if (curr.name == "gr") {
            /* veće od */
            string a = curr.params[0], store = curr.params[2];
            int k = vectorTable[curr.params[1]][0];

            if(vectorTable[a].size() != vectorTable[store].size()){
                cout << "GRESKA: vektor A i vektor za rezultat nisu iste velicine\n";
                continue;
            }

            #pragma parallel for
            for(int i = 0; i < vectorTable[a].size(); i++){
                vectorTable[store][i] = (vectorTable[a][i] > k ? 1 : 0);
            }
        }
        else if (curr.name == "eq") {
            /*jednakost*/
            string a = curr.params[0], store = curr.params[2];
            int k = vectorTable[curr.params[1]][0];

            #pragma omp parallel for
            for(int i = 0; i < (int)vectorTable[a].size(); i++){
                vectorTable[store][i] = (vectorTable[a][i] == k ? 1 : 0);
            }
        }
        else if (curr.name == "and") {
            /* and nad bool vektorima */
            string a = curr.params[0], b = curr.params[1], store = curr.params[2];

            if (vectorTable[a].size() != vectorTable[b].size()) {
                cout << "GRESKA: logicko i nad vektorima koji nisu iste velicine\n";
                continue;
            }

            #pragma omp parallel for
            for(int i = 0; i < (int)vectorTable[a].size(); i++){
                if(vectorTable[a][i] != 0 && vectorTable[a][i] != 1){
                    cout << "GRESKA: prvi vektor nije bool vektor\n";
                    break;
                }
                if(vectorTable[b][i] != 0 && vectorTable[b][i] != 1){
                    cout << "GRESKA: drugi vektor nije bool vektor\n";
                    break;
                }

                vectorTable[store][i] = (vectorTable[a][i] & vectorTable[b][i] ? 1 : 0);
            }
        }
        else if (curr.name == "or") {
            /* logicko ili nad bool vektorima */
            string a = curr.params[0], b = curr.params[1], store = curr.params[2];

            if (vectorTable[a].size() != vectorTable[b].size()) {
                cout << "GRESKA: logicko ili nad vektorima koji nisu iste velicine\n";
                continue;
            }

            #pragma omp parallel for
            for (int i = 0; i < (int)vectorTable[a].size(); i++) {
                if(vectorTable[a][i] != 0 && vectorTable[a][i] != 1){
                    throw runtime_error("GRESKA: prvi vektor nije bool vektor\n");
                    //cout << "GRESKA: prvi vektor nije bool vektor\n";
                    //break;
                }
                if(vectorTable[b][i] != 0 && vectorTable[b][i] != 1){
                    throw runtime_error("GRESKA: prvi vektor nije bool vektor\n");
                    //cout << "GRESKA: drugi vektor nije bool vektor\n";
                    //break;
                }

                vectorTable[store][i] = (vectorTable[a][i] | vectorTable[b][i] ? 1 : 0);
            }
        }
        else if (curr.name == "not") {
            /* logicko ili nad bool vektorima */
            string a = curr.params[0], store = curr.params[1];

            #pragma omp parallel for 
            for (int i = 0; i < (int)vectorTable[a].size(); i++) {
                if (vectorTable[a][i] != 0 && vectorTable[a][i] != 1) {
                    cout << "GRESKA: vektor nije bool vektor!\n";
                    break;
                }

                vectorTable[a][i] = !(vectorTable[a][i]);
            }
        }
        else if (curr.name == "print") {
            /* ispisuje vektor */
            string var = curr.params[0];

            for (auto x : vectorTable[var]) {
                cout << x << " ";
            }
            cout << "\n";
        }
        else {
            cout << "Nije unesena validna instrukcija\n";
        }
    }

    return 0;
}