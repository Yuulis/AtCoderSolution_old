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
    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    for (int i = 0; i < N; i++) cin >> P[i];

    sort(P.begin(), P.end());

    int ans = 0;
    for (int i = 0; i < K; i++) {
        ans += P[i];
    }

    cout << ans << endl;
}