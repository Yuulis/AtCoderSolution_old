#include <bits/stdc++.h>
using namespace std;

#define INF 1e+9;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    int cnt = 0;
    bool ok = true;
    while (ok) {
        for (int i = 0; i < N; i++) {
            if (A.at(i) % 2 == 1) {
                ok = false;
                break;
            }
            A.at(i) /= 2;
        }
        cnt++;
    }

    cout << cnt - 1 << endl;
}