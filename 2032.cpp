#include<iostream>
#include<queue>
using namespace std;

int main(){
    int a=1, cont=0;
    string p;
    queue<char>fila1, fila2;
    for(int i=0;i<3;i++){
        cin>> p;
        for(auto&x: p){
            fila1.push(x);
        }
    }
    while(!fila1.empty()){
        if(fila1.front()==a){
            fila2.push(fila1.front());
            fila1.pop();
            a++;
            cont++;
            cout << fila1.front();
        }else{
            fila1.push(fila1.front());
            a++;
        }

        if (a>=9){
            a=0;
        }
    }
    cout << cont;




    return 0;
}