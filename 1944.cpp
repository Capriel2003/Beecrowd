#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n, cont = 0, final=0;
    char ch;

    cin >> n;

    stack<char> pilha, pilhaAux, face;
    face.push('E'); face.push('C'); face.push('A'); face.push('F');  

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 4; j++){
            cin>>ws;
            cin >> ch;
            pilha.push(ch);

            if(ch==face.top()){
                face.pop();
                cont++;
            }
            if(cont==4){
                face.push('E'); face.push('C'); face.push('A'); face.push('F');
                final++;
            }
            else{
                    stack<char>lixo;
                    face.swap(lixo);
                    face.push('E'); face.push('C'); face.push('A'); face.push('F');
            }
        }

        while(!pilha.empty()){
            stack<char> subs, subs2;
            while(pilha.top()==pilhaAux.top()){
                subs.push(pilha.top());
                pilhaAux.pop(); pilha.pop();
            }
            if(pilha.empty())
                final++;
            else{
                subs2.push(subs.top()); subs.pop();
                pilha.push(subs2.top());
                pilhaAux.push(pilha.top());
                pilha.pop();
            }
        }

    }

    cout << final << endl;






    return 0;
}