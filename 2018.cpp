#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

bool compareMedalhas(pair<string, vector<int>>& a, pair<string, vector<int>>& b) {
    if (a.second[0] != b.second[0]) {
        return a.second[0] > b.second[0];  
    } else if (a.second[1] != b.second[1]) {
        return a.second[1] > b.second[1];  
    } else if (a.second[2] != b.second[2]) {
        return a.second[2] > b.second[2];  
    } else 
        return a.first < b.first;  
}

int main(){
    unordered_map<string, vector<int>> posicao;
    string prova, prim, seg, ter;

    while(getline(cin, prova)){
        getline(cin, prim);
        getline(cin, seg);
        getline(cin, ter);
        
        if (posicao.find(prim) == posicao.end()) {
            posicao[prim] = {0, 0, 0};
        }
        if (posicao.find(seg) == posicao.end()) {
            posicao[seg] = {0, 0, 0};
        }
        if (posicao.find(ter) == posicao.end()) {
            posicao[ter] = {0, 0, 0};
        }

        posicao[prim][0]++;
        posicao[seg][1]++;
        posicao[ter][2]++;
    }

    vector<pair<string, vector<int>>> total(posicao.begin(), posicao.end());
    sort(total.begin(), total.end(), compareMedalhas);

    cout << "Quadro de Medalhas" << endl;
    for (auto& x: total) {
        cout << x.first << " " << x.second[0] << " " << x.second[1] << " " << x.second[2] << endl;
    }

    return 0;
}

