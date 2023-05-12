#include <bits/stdc++.h>
using namespace std;

vector<string> load() 
{
    ifstream in("bin/input.ir");

    vector<string> tokens;
    
    string line = "";
    while(getline(in, line)) {
        // parsiranje linije
        string token = "";
        for (int i = 0; i < (int)line.size(); i++) {
            if (line[i] == ' ') {
                tokens.push_back(token);
                token = "";
            }
            else token += line[i];
        }
        if (token != "") tokens.push_back(token);
    }

    in.close();

    return tokens;
}

int main()
{
    vector<string> tokens = load();

    for (auto s : tokens) 
        cout << s << "\n";

    return 0;
}