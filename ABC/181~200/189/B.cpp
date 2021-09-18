#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> V(N), P(N);
    for (int i = 0; i < N; i++) cin >> V[i] >> P[i];

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += V[i] * P[i];

        if (sum > X * 100) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}