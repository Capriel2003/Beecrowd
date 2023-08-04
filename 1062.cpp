#include <iostream>
#include <stack>

using namespace std;

int main(){
    int a, val;

    while (cin >> a && a != 0)
    {
        stack<int> Pil;
        while (true){
            int maior =a;
            stack<int> Paux, Pfin;
            for (int i = 0; i < a; i++){
                cin >> val;
                if (val == 0){
                    cout << endl;
                    break;
                }
                Pil.push(val);
            }
            if (val == 0)
                break;
            

            while(!Pil.empty()){
                Paux.push(Pil.top());
                Pil.pop(); 

                while(!Paux.empty() && Paux.top()==maior){
                    Pfin.push(Paux.top());
                    maior--;
                    Paux.pop();
                }

                    
            }

            if(!Paux.empty())
                cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }
    return 0;
}
