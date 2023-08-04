#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n, x, aux;
    cin >> n;

    unordered_set<int> num, num2;

    vector<int> vet;

    for (int i = 0; i < n; i++) {
        cin >> x;
        num.insert(x);
        vet.push_back(x);
    }

    cin >> aux;
    for (int i = 0; i < aux; i++) {
        cin >> x;
        num2.insert(x);
    }

    for (auto& x : num2) {
        num.erase(x);
    }

    bool ult = true;
    for (auto& i : vet) {
        if (num.count(i) > 0) {
            if (ult) {
                cout << i;
                ult = false;
            } else {
                cout << " " << i;
            }
        }
    }
    cout << endl;

    return 0;
}
