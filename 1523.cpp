#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n, k, en, sa, car;
    
    while(cin>>n && n!=0){
        car=0;
        bool flag=true;
        stack<int> pilEn, pilSa;
        cin >> k;



        for(int i=0; i<n; i++){
            cin >> en; 
            cin >> sa; 
        

            while(!pilSa.empty() && en>pilSa.top()){
                pilEn.pop();
                pilSa.pop();
                car--;
            }

            if((!pilSa.empty() && sa>pilSa.top()) || car>=k){
                flag = false;
            }
            
            pilEn.push(en);
            pilSa.push(sa);
            car++;
        }
        
        if(flag)
            cout << "Sim" << endl;
        else cout << "Nao" << endl;

    }
    return 0;
}