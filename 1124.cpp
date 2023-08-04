#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int l,c,r1,r2,soma,dist, x,y;
    do{
        cin>>l>>c>>r1>>r2;
        if(c!=0 || l!=0 ||r1!=0 ||r2!=0){
            
            soma = r1+r2;
            x = l-soma;
            y = c-soma;
            dist = sqrt((x*x) + (y*y));
            if(soma<=dist){
                cout << "S" << endl;
            }
            if(r1>c || r1>l ||r2>c||r2>l||soma>dist){
                cout << "N" << endl;
            }
            
        }
    }while (c!=0 || l!=0 ||r1!=0 ||r2!=0);
    return 0;
}