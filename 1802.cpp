#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int P, M, F, Q, B, dist;
    cin >> P;
    vector<int> pt(P);
    for (int i = 0; i < P; i++) {
        cin >> pt[i];
    }

    cin >> M;
    vector<int> mat(M);
    for (int i = 0; i < M; i++) {
        cin >> mat[i];
    }

    cin >> F;
    vector<int> fis(F);
    for (int i = 0; i < F; i++) {
        cin >> fis[i];
    }

    cin >> Q;
    vector<int> quim(Q);
    for (int i = 0; i < Q; i++) {
        cin >> quim[i];
    }

    cin >> B;
    vector<int> bio(B);
    for (int i = 0; i < B; i++) {
        cin >> bio[i];
    }

    cin >> dist;
    vector<vector<int>> conj;
    for (auto& livroPt : pt) {
        for (auto& livroMat : mat) {
            for (auto& livroFis : fis) {
                for (auto& livroQui : quim) {
                    for (auto& livroBio : bio) {
                        vector<int> conjunto = {livroPt, livroMat, livroFis, livroQui, livroBio};
                        conj.push_back(conjunto);
                    }
                }
            }
        }
    }

    
    vector<int> valores;
    for (auto& conjunto : conj) {
        int valor = 0;
        for (auto& livro : conjunto) {
            valor += livro;
        }
        valores.push_back(valor);
    }

    sort(valores.rbegin(), valores.rend());

    for(auto x: valores) cout << x << endl;
    
    int res = 0;
    for (int i = 0; i < dist; i++) {
        res += valores[i];
    }

    cout << res << endl;

    return 0;
}
