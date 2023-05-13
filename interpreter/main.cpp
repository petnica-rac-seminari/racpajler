#include <vector>
#include <string>
#include <map>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

class Vector {
    public:
        int len;    // duzina vektora
        vector<int> data;

        Vector(int _len) {
            len = _len;
            data = {};
        }
};

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
    map<string, Vector> mp;

    for (Instruction &curr : instructions) {
        if (curr.name == "init") {

        }
        else if (curr.name == "add") {

        }
        else if (curr.name == "mul") {

        }
        else if (curr.name == "gr") {

        }
        else if (curr.name == "gre") {

        }
        else if (curr.name == "ls") {

        }
        else if (curr.name == "lse") {

        }
        else if (curr.name == "eq") {

        }
        else if (curr.name == "and") {

        }
        else if (curr.name == "or") {

        }
        else if (curr.name == "xor") {

        }
        else if (curr.name == "not") {

        }
        else if (curr.name == "print") {

        }
        else {
            cout << "Nije unesena validna instrukcija\n";
        }
    }

    return 0;
}