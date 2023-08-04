#include <iostream>
using namespace std;

int main() {
    int hi, mi, hf, mf;
    while(cin >> hi >> mi >> hf >> mf){
    
    int durh = hf - hi;
    int durm = mf - mi;

    if (durm < 0) {
        durh--;
        durm += 60;
    }

    if (durh < 0 || (durh==0 && durm==0)) {
        durh += 24;
    }

    cout << "O JOGO DUROU " << durh << " HORA(S) E " << durm << " MINUTO(S)" << endl;
    }
    
    return 0;
}
