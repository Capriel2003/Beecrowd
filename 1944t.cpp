#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main(){
    int n, cont = 0; cin >> n;
    string fr;
    stack<string> pilha;

    for (int i=0; i<n; i++){
        cin>>ws;
        getline(cin, fr);
        fr.erase(remove_if(fr.begin(), fr.end(), ::isspace), fr.end());
        reverse(fr.begin(), fr.end());

        if(pilha.empty()){
            pilha.push("FACE");
        }
        if(fr==pilha.top()){
            pilha.pop();
            cont++;
        }
        else{
            reverse(fr.begin(), fr.end());
            pilha.push(fr);
        }
    }
    cout << cont << endl;

    return 0;
}