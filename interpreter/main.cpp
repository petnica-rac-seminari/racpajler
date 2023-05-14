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

bool startswith(string a, string b){
    if(b.length() > a.length()) return false;

    for(int i = 0; i < b.length(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main()
{

    vector<Instruction> instructions = load();
    map<string, vector<int>> vectorTable;

    int lineCount = 1;

    for (Instruction &curr : instructions) {
        if(startswith(curr.name, "#")) continue;
        else if (curr.name == "init") {
            /* inicijalizuje vektor */
            // params[0] - ime vektora
            // params[1] - ':'
            // params[2...n] - elementi vektora

            string var = curr.params[0];

            vector<int> data;
            for (int i = 2; i < (int)curr.params.size(); i++) {
                data.push_back(strToInt(curr.params[i]));
            }

            vectorTable[var] = data;
        }
        else if (curr.name == "add") {
            /* sabira dva vektora */
            string a = curr.params[0], b = curr.params[1], store = curr.params[2];

            if (vectorTable[a].size() != vectorTable[b].size()) {
                throw runtime_error("GRESKA: sabiranje vektora koji nisu iste velicine " + to_string(lineCount));
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
                throw runtime_error("GRESKA: vektor A i vektor za rezultat nisu iste velicine " + to_string(lineCount));
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
                throw runtime_error("GRESKA: vektor A i vektor za rezultat nisu iste velicine " + to_string(lineCount));
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
                throw runtime_error("GRESKA: logicko i nad vektorima koji nisu iste velicine " + to_string(lineCount));
                continue;
            }

            #pragma omp parallel for
            for(int i = 0; i < (int)vectorTable[a].size(); i++){
                if(vectorTable[a][i] != 0 && vectorTable[a][i] != 1){
                    throw runtime_error("GRESKA: prvi vektor nije bool vektor " + to_string(lineCount));
                    break;
                }
                if(vectorTable[b][i] != 0 && vectorTable[b][i] != 1){
                    throw runtime_error("GRESKA: drugi vektor nije bool vektor " + to_string(lineCount));
                    break;
                }

                vectorTable[store][i] = (vectorTable[a][i] & vectorTable[b][i] ? 1 : 0);
            }
        }
        else if (curr.name == "or") {
            /* logicko ili nad bool vektorima */
            string a = curr.params[0], b = curr.params[1], store = curr.params[2];

            if (vectorTable[a].size() != vectorTable[b].size()) {
                throw runtime_error("GRESKA: logicko ili nad vektorima koji nisu iste velicine " + to_string(lineCount));
                continue;
            }

            #pragma omp parallel for
            for (int i = 0; i < (int)vectorTable[a].size(); i++) {
                if(vectorTable[a][i] != 0 && vectorTable[a][i] != 1){
                    throw runtime_error("GRESKA: prvi vektor nije bool vektor " + to_string(lineCount));                     
                }
                if(vectorTable[b][i] != 0 && vectorTable[b][i] != 1){
                    throw runtime_error("GRESKA: prvi vektor nije bool vektor " + to_string(lineCount));
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
                    throw runtime_error("GRESKA: vektor nije bool vektor! " + to_string(lineCount));
                    continue;
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
        else if(curr.name == "del"){
            string a = curr.params[0], b = curr.params[1], store = curr.params[2];
            
            if(vectorTable[a].size() != vectorTable[b].size()){
                throw runtime_error("GRESKA: Vektori nisu iste velicine " + to_string(lineCount));
                continue;
            }
            #pragma omp parallel for
            for(int i = 0; i < vectorTable[b].size(); i++){
                if(vectorTable[b][i] != 0 && vectorTable[b][i] != 1){
                    throw runtime_error("GRESKA: drugi vektor nije bool " + to_string(lineCount));
                    continue;
                }
            }

            vector<int> res;
            for(int i = 0; i < vectorTable[a].size(); i++){
                if(vectorTable[b][i] == 1) res.push_back(vectorTable[a][i]);
            }

            #pragma omp parallel
            vectorTable[store] = res;
        }
        else if(curr.name == "ld"){
            string a = curr.params[0], b = curr.params[1];

        }
        else {
            throw runtime_error("GRESKA: Nije unesena validna instrukcija " + to_string(lineCount));
        }
        lineCount++;
    }

    return 0;
}