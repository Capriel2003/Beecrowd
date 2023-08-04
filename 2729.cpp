#include <iostream>
#include <sstream>
#include <set>

using namespace std;

set<string> organizarListaCompras(string& itens) {
    istringstream iss(itens);
    set<string> lista;
    string item;

    while (iss >> item) {
        lista.insert(item);
    }
    return lista;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string itens;
        getline(cin, itens);
        set<string> list = organizarListaCompras(itens);
        string space = "";
        for (auto& x : list) {
            cout << space<<x;
            space = " ";
        }
        cout << endl;
    }
    return 0;
}
