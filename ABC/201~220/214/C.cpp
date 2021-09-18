#include <bits/stdc++.h>
using namespace std;

#define INF 1e+9;

int main() {
    int N;
    cin >> N;

    vector<int> S(N), T(N);
    for (int i = 0; i < N; i++) cin >> S.at(i);
    for (int i = 0; i < N; i++) cin >> T.at(i);

    vector<int> ans = T;
    for (int i = 0; i < N * 2; i++) {
        ans.at((i + 1) % N) = min(ans.at((i + 1) % N), ans.at(i % N) + S.at(i % N));
    }

    for (int i = 0; i < N; i++) cout << ans.at(i) << endl;
}