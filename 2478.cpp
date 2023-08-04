#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n;
    string pal, nome, p1,p2,p3;
    map<string, vector<string>> lista;

    cin>>n;
    while(n--){
        cin>>nome>>p1>>p2>>p3;
        lista[nome]={p1,p2,p3};
    }
    while(cin>>nome>>p1){
        bool flag = false;
        for(auto& x: lista[nome]){
            if(x == p1){
                flag = true;
                break;
            }
        }
        if(!flag) cout << "Tente Novamente!" <<endl;
        else cout << "Uhul! Seu amigo secreto vai adorar o/" <<endl;
    }


    return 0;
}