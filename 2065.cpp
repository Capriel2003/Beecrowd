#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    int n, m, vi, cj,last;
    cin>>n>>m;
    auto cmp = [](pair<int, int> left, pair<int, int> right) {
        return ((left.first<=right.first) && (left.second <= right.second));
    };
    priority_queue<pair<int, int>, vector<pair<int, int> >, decltype(cmp)> func(cmp);
    vector<int> vec;
    queue<int> clientes;
    pair<int,int> par;

    for(int i=0; i<n; i++) {
        cin >> vi;
        vec.push_back(vi);
        par.second = (i);
        par.first = (0);
        func.push(par);
    }

    for(int i=0; i<m; i++){
        cin >> cj;
        clientes.push(cj);
    }


    while(!clientes.empty()){
        par = func.top();
        func.pop();
        par.first -= vec[par.second]*clientes.front();
        func.push(par);

        clientes.pop();
    }
    while(!func.empty()){
        cout << "func " << func.top().first <<endl;
        cout << "func2 " << func.top().second <<endl;
        cout << "vec " << vec[func.top().second] <<endl;
       last = func.top().first;
       func.pop();
    }

    cout << (-1)*last <<endl;




    return 0;
}