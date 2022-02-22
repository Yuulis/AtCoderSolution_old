#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <atcoder/modint.hpp>

using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;
using mint = modint998244353;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

ll intCeil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> w(N), v(N);
    for (int i = 0; i < N; i++) cin >> w[i] >> v[i];

    vector<vector<ll>> dp(110, vector<ll>(201010, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < W; j++) {
            chmax(dp[i + 1][j], dp[i][j]);
            chmax(dp[i + 1][j + w[i]], dp[i][j] + v[i]);
        }
    }

    ll ans = 0;
    for (int i = 0; i <= W; i++) {
        chmax(ans, dp[N][i]);
    }

    cout << ans << endl;
}