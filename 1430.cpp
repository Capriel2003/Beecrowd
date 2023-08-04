#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {
    map<char,double>notas;
    notas['W'] = 1;
    notas['H'] = 0.5;
    notas['Q'] = 0.25;
    notas['E'] = 0.125;
    notas['S'] = 0.0625;
    notas['T'] = 0.03125;
    notas['X'] = 0.015625;

    string pal;

    while (getline(cin, pal) && pal!="*") {
        int num = 0;
        double tot=0.0;

        for (char c : pal) {
            if (c == '/') {
                if (tot == 1)
                    num++;
                tot = 0.0;
                    
            } else {
                tot += notas[c];
                
            }
        }
        cout << num << endl;
    }

    return 0;
}
