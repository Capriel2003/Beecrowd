#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int r1,x1,y1,r2,x2,y2,pit;

    while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
        pit = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1) + (y2-y1)));
        if(pit+r2 > r1){
            cout << "MORTO" << endl;
        }
        else cout << "RICO" << endl;

    }
    return 0;
}