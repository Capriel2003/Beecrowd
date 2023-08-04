#include <iostream>
#include <set>
#include <string>
#include <climits>
using namespace std;

void removerRepeticoes(set<pair<string, pair<string, int>>>& a) {
    set<string> nomes;
    set<pair<string, pair<string, int>>> novoConjunto;

    for (auto& x : a) {
        if (nomes.find(x.first) == nomes.end()) {
            nomes.insert(x.first);
            novoConjunto.insert(x);
        }
    }

    a = novoConjunto;
}

void comparaTam(set<pair<string, pair<string, int>>> a){
    set<pair<string, int>> max;
    int tam=0, val=0;
    for(auto &x: a){
        if (x.second.first == "YES") {
            if (x.first.size() > tam) {
                val = x.second.second;
                max.clear();
                max.insert({x.first, val});
                tam = x.first.size();
            } else if (x.first.size() == tam) {
                max.insert({x.first, x.second.second});
            }
        }
    }
    int menorValor = 5000;
    string pal;
    for (auto& y : max) {
        menorValor = min(menorValor, y.second);
    }

    for (auto& y : max) {
        if(y.second == menorValor){
            cout <<y.first <<endl;
        }
    }
    
    
}

int main() {
    set<pair<string, pair<string, int>>> insc;
    string nome, opcao;
    int i=0;

    while (true) {
        cin >> nome;
        if (nome == "FIM") {
            break;
        }
        cin >> opcao;
        insc.insert({nome, {opcao, i++}});
    }

    removerRepeticoes(insc);

    for (auto& inscrito : insc) {
        if(inscrito.second.first == "YES")
        cout << inscrito.first<< endl;
    }
    for (auto& inscrito : insc) {
        if(inscrito.second.first == "NO")
        cout << inscrito.first << endl;
    }

    cout << endl << "Amigo do Habay:" << endl;

    comparaTam(insc);
    cout << endl;

    return 0;
}
