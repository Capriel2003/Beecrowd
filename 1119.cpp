#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, k, m;
    while (cin >> N >> k >> m && !(N == 0 && k == 0 && m == 0)) {
        vector<int> candidates(N);
        for (int i = 0; i < N; i++) {
            candidates[i] = i + 1;
        }

        int clockwiseIndex = 0;
        int anticlockwiseIndex = N - 1;
        bool firstPair = true;

        while (!candidates.empty()) {
            int count = 0;
            int chosen1, chosen2;

            while (count < k) {
                clockwiseIndex = (clockwiseIndex + 1) % candidates.size();
                chosen1 = candidates[clockwiseIndex];
                count++;
            }

            count = 0;

            while (count < m) {
                anticlockwiseIndex = (anticlockwiseIndex - 1 + candidates.size()) % candidates.size();
                chosen2 = candidates[anticlockwiseIndex];
                count++;
            }

            if (!firstPair) {
                cout << ",";
            } else {
                firstPair = false;
            }

            if (chosen1 != chosen2) {
                cout << chosen1 << " " << chosen2;
                candidates.erase(candidates.begin() + anticlockwiseIndex);
                if (anticlockwiseIndex <= clockwiseIndex) {
                    clockwiseIndex--;
                }
            } else {
                cout << chosen1;
                candidates.erase(candidates.begin() + clockwiseIndex);
                anticlockwiseIndex--;
            }
        }

        cout << endl;
    }

    return 0;
}
