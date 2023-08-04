#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int q;
    cin>>q;
    while(q--){
        unordered_map<string, string> dicionario;
        int n,m;
        string jap, trad, letra, aux;
        cin>>n>>m;
        cin.ignore();
        while(n--){
            getline(cin, jap);
            getline(cin, trad);
            dicionario[jap] = trad;
        }
        while(m--){
            getline(cin,letra);
            stringstream ss(letra);
            string space = "";
            while(ss>>aux){
                if(!dicionario[aux].empty()){
                    cout <<space<< dicionario[aux];
                    space = " ";
                }
                else{
                    cout <<space<< aux;
                    space = " ";
                }
            }
            cout << endl;
        }
        cout << endl;

    }
    
    return 0;
}
