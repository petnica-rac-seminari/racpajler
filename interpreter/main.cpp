#include <vector>
#include <string>
#include <map>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <cstdio>

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
                data.push_back(strToInt(curr.params[i]));
            }

            vectorTable[var] = data;
        }
        else if (curr.name == "add") {
            // todo
            continue;
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