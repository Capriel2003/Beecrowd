#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    string obj;
    double val;
    int num;
    cin >> num;

    for (int i=0; i<num; i++) {
        int qntProd;
        cin >> qntProd;
        map<string, double> precos;

        for (int j=0; j<qntProd; j++) {
            cin >> obj >> val;
            precos[obj] = val;
        }

        int qntCompras;
        cin >> qntCompras;
        double total = 0.0;

        for (int j=0; j<qntCompras; j++) {
            cin >> obj >> val;
            total += precos[obj] * val;
        }
        cout << "R$ " << fixed << setprecision(2) << total << endl;
    }

    return 0;
}
