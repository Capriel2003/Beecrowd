#include<iostream>
#include <vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a){
        int v, p, s, ap, u, no=0; 
        bool sub=false, d=false, flag=false;
        vector<int>vet; 
        for(int i=0; i<a;i++){
            cin >> v;
            vet.push_back(v);
        }
        p = vet.front();
        s = vet[1];
        ap = vet[vet.size()-2];
        u = vet.back();

        

        for(int i=1; i<a;i++){

            cout << "flag " <<flag << endl;

            if(flag){
                no++;
            }
            if(vet[i]>vet[i-1]){
                sub = true;
                if(d){
                    flag=true;
                }
                else flag = false;
                d=false;
            }
            else{
                d=true;
                if(sub){
                    flag=true;
                }
                else flag = false;
                sub=false;
            }
        }
        cout << no <<endl;


        cin>>a;
    } 


    return 0;
}