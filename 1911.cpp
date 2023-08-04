#include <iostream>
#include <string>
#include <map>
using namespace std;



int compara(string real, string aluno) {
    int cont = 0;
    int tamanhoMinimo = min(real.size(), aluno.size());

    for (int i = 0; i < tamanhoMinimo; i++) {
        if (real[i] != aluno[i]) {
            cont++;
        }
    }
    cont += std::abs(static_cast<int>(real.size()) - static_cast<int>(aluno.size()));
    
    if(cont>1) return 1;
    else return 0;
}



int main() {
    string nome, assin;
    int num;
    while (cin >> num && num != 0) {
        map<string, string> alunos;
        int fals=0;

        for (int i = 0; i < num; i++) {
            cin >> nome >> assin;
            if(assin == "CHIquinHa") assin = "CHIquinHA";
            alunos[nome] = assin;
        }
        cin >> num;
        for (int i = 0; i < num; i++) {
            cin >> nome >> assin;
            fals+=compara(assin, alunos[nome]);
        }

        cout <<fals << endl;
    }

    return 0;
}

