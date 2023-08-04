#include <iostream>
#include <queue>
using namespace std;
int main(){
    int t, n, m;
    cin >> t;


    for(int z=0; z<t; z++){
        int to = 0;
        cin >> n >> m;

        if(m>n){
            queue<int> fib; fib.push(0);
            for (int i = 0; i < n; i++) {
                fib.push(fib.front()+i);
                fib.pop();
            }
            cout << fib.front() << " ";
            int cont=0;
            to = fib.front()%1000007;
            for (int i = n; i < m-1; i++) {
                to = ((to + fib.front())-cont) % 1000007;
                fib.push((to)%1000007);
                fib.pop();
                cont++;
            }
            cout << fib.front() << endl; 
            
        }
        else {
            cout << m-1 % 1000007 << endl;
        }
    }
    return 0;
}