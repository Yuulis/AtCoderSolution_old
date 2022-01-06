#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;
// template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1;
// } return 0; } template<class T>bool chmin(T &a, const T &b) { if (b < a) { a
// = b; return 1; } return 0; }

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    ll ans = 1;
    for (int i = 0; i < N; i++) {
        if (A[i] <= 1000000000000000000 / ans)
            ans *= A[i];
        else {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans << endl;
}