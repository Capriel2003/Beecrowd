#include <iostream>
#include <set>
using namespace std;

int main(){
    int a;
    string nome, cor;
    char tam;
    cin >> a;
    while(a){
        multiset<pair<string, pair<char, string>>> pessoa;
        while(a--){
            cin>>ws;
            getline(cin, nome);
            cin>>ws;
            cin>>cor>>tam;
            
            pessoa.insert(make_pair(cor, make_pair(-tam, nome)));
        }
        for(auto &x: pessoa){
            cout << x.first << " " << (char)((-1)*x.second.first) << " " << x.second.second << endl;
        }
        cin >> a;
    }

    return 0;
}