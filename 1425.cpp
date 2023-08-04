#include <iostream>
using namespace std;

void recursiva(int pos,int n,int m,bool flag,int i){
    if(pos==m) flag = true;

    else if(!flag){
        if(pos+(2*i)-1 <= m){ recursiva(pos+(2*i)-1, n, m, flag, i+1);}
        pos-=(2*i)-1;
        if(pos>=0) recursiva(pos, n, m, flag, i+1);
    }
}



int main(){
    int n,m;
    while(cin>>n>>m && (n||m)){
        if(n>48||m>34) cout << "Let me try" << endl;
        else{
            bool flag=false;
            n--;
            m--;
            recursiva(0,n,m,flag,2);
            if(flag){
                cout << "Let me try" << endl;
            }
            else cout << "Don't make fun of me!" << endl;
        }
    }

    return 0;
}