#include <bits/stdc++.h>
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

        // preskacemo praznu liniju
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
    
    // hes tabela za promenljive
    map<string, int> variables;            

    for (Instruction &in : instructions) {
        if (in.name == "dodeli") {
            string var = in.params[0]; 
            int val = strToInt(in.params[1]);

            variables[var] = val;
            cout << "Napravljena promenljiva " << var << " = " << val << "\n";
        }
        else if (in.name == "saberi") {
            string var1 = in.params[0];
            string var2 = in.params[1];

            int res = variables[var1] + variables[var2];
            cout << "Rezultat sabiranja: " << res << "\n";
        }
        else if (in.name == "pomnozi") {
            string var1 = in.params[0];
            string var2 = in.params[1];

            int res = variables[var1] * variables[var2];
            cout << "Rezultat mnozenja: " << res << "\n";
        }
        else if (in.name == "podeli") {
            string var1 = in.params[0];
            string var2 = in.params[1];

            int res = variables[var1] / variables[var2];
            cout << "Rezultat deljenje: " << res << "\n";
        }
        else {
            cout << "Pogresna instrukcija u medjukodu\n";
        }
    }

    return 0;
}