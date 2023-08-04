#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int v;
    char p1, p2;

    while(cin >> v && v!=0){
        queue<char> fila, filaC, filaF;
        stack<char> pilha;

        for(int i=0; i<v; i++){
            cin>>p1;
            fila.push(p1);
        }
        for(int i=0; i<v; i++){
            cin>>p2;
            filaC.push(p2);
        }

        while(!fila.empty()){
            pilha.push(fila.front());
            fila.pop();
            cout << "I";

            while(!pilha.empty() && pilha.top()==filaC.front()){
                filaC.pop();
                filaF.push(pilha.top());
                pilha.pop();
                cout << "R";
            }
        }

        if(!pilha.empty())
            cout << " Impossible";
        if(true) cout << endl;
    }

    return 0;
}