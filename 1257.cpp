#include <iostream>
#include <string>
using namespace std;

int calc(string& pal, int pos) {
    int val = 0;
    for (int i = 0; i < pal.length(); i++) {
        int valor = pal[i] - 'A' + i + pos;
        val += valor;
    }
    return val;
}

int main() {
    int num;
    cin >> num;

    for (int i=0; i<num; i++) {
        int tam;
        cin >> tam;
        int hash = 0;
        for (int j=0; j<tam; j++) {
            string letras;
            cin >> letras;
            hash += calc(letras, j);
        }

        cout << hash << endl;
    }

    return 0;
}
