#include <iostream>
#include <set>
#include  <vector>
using namespace std;

int main(){
    int n, t, x;
    cin >> n >> t;
    multiset<int, greater<int>> list;

    for(int i=0; i<n; i++){
        cin >> x;
        list.insert(x);
    }

    for(int i=0; i<t; i++){
        cin >> x;
        int cont=0;
        for(auto &j: list){
            if(cont==j){
                cout << j;
            }
            cont++;
        }
    }


    return 0;
}

