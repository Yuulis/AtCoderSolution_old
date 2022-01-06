#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), P(N), X(N);
    for (int i = 0; i < N; i++) cin >> A[i] >> P[i] >> X[i];

    int ans = INF;
    bool flag = false;
    for (int i = 0; i < N; i++) {
        X[i] -= A[i];
        if (X[i] <= 0)
            continue;
        else {
            flag = true;
            ans = min(ans, P[i]);
        }
    }

    if (flag)
        cout << ans << endl;
    else
        cout << -1 << endl;
}