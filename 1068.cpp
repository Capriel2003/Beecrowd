#include <iostream>
#include <stack>
using namespace std;

int main(){
    int total,res; 
    bool flag;
    string exp;

    
    while(cin>>exp){
        flag = false;
        total=res=0;
        stack<char> pal;

        for(auto &x: exp){
            if(x=='('){
                res++;
                total++;
                pal.push(x);
            }
            else if(x==')'){
                total++;
                if(!pal.empty()){
                    res--;
                    pal.pop();
                }
            }
        }
        if(total%2==0 && pal.empty()){
            flag = true;
        }

        if(flag)
            cout << "correct" << endl;
        else 
            cout << "incorrect" << endl;

    }


    return 0;
}
