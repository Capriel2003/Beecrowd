#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

int min_operacoes(int N, int M) {
    unordered_set<int> explorados;
    queue<pair<int, int>> fila;
    fila.push(make_pair(N, 0));
    while (!fila.empty()) {
        int n = fila.front().first;
        int k = fila.front().second;
        fila.pop();
        if (n == M) {
            return k+1;
        }
        explorados.insert(n);
        for (int operacao : {n*2, n*3, n/2, n/3, n+7, n-7}) {
            if (0 <= operacao && operacao <= 10000 && !explorados.count(operacao)) {
                fila.push(make_pair(operacao, k+1));
                explorados.insert(operacao);
            }
        }
    }
    return -1; // Não é possível converter N em M
}

int main() {
    int N,M; cin>>N>>M;
    cout << min_operacoes(N, M) << endl; // Saída esperada: 2
    return 0;
}
