#include <iostream>
#include <stack>
using namespace std;
int main(){
    string str;
    while(cin>>str){
        stack<char> pilha;
        int cont=0;
        for(auto &x: str){
            bool sla = true;
            if(!pilha.empty()){
                if((x=='B' && pilha.top()=='S') || (x=='S' && pilha.top()=='B')){
                    pilha.pop();
                    cont++;
                    sla = false;
                }
                if((x=='C' && pilha.top()=='F') || (x=='F' && pilha.top()=='C')){
                    pilha.pop();
                    cont++;
                    sla = false;
                }
            }
            if(sla){pilha.push(x);}
        }
        cout << cont << endl;
    }
    return 0;
}
