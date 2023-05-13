#include <vector>
#include <string>
#include <map>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <omp.h>

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
            string a = curr.params[0], b = curr.params[1], store = curr.params[2];
            //     levi operand   desni operand  mesto cuvanja

            int n = min(vectorTable[a].size(), vectorTable[b].size());
            //  duzina manjeg              

            if(vectorTable[store].size() < n) break;
            // ako je duzina niza za cuvanje manja od oba niza, rezultat nece stati

            #pragma omp parallel for
            for(int i = 0; i < n; i++){
                vectorTable[store][i] = vectorTable[a][i] + vectorTable[b][i];
            }

            for(int i = 0; i < n; i++){
                cout << vectorTable[store][i] << " ";
            }
        }
        else if (curr.name == "mul") {
            // todo 
            continue;
        }
        else if (curr.name == "gr") {
            // todo
            continue;
        }
        else if (curr.name == "gre") {
            // todo
            continue;
        }
        else if (curr.name == "ls") {
            continue;
        }
        else if (curr.name == "lse") {
            continue;
        }
        else if (curr.name == "eq") {
            continue;
        }
        else if (curr.name == "and") {
            continue;
        }
        else if (curr.name == "or") {
            continue;
        }
        else if (curr.name == "xor") {
            continue;
        }
        else if (curr.name == "not") {
            continue;
        }
        else if (curr.name == "print") {
            continue;
        }
        else {
            cout << "Nije unesena validna instrukcija\n";
        }
    }

    return 0;
}