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
    int N, X;
    cin >> N >> X;
    vector<pair<int, int>> choice(N);
    for (int i = 0; i < N; i++) cin >> choice[i].first >> choice[i].second;

    vector<vector<bool>> dp(N + 1, vector<bool>(X + 1, false));
    dp[0][0] = 1;

    for (int i = 0; i < N; i++) {
        int a = choice[i].first;
        int b = choice[i].second;

        for (int j = 0; j <= X; j++) {
            if (dp[i][j]) {
                if (j + a <= X) dp[i + 1][j + a] = true;
                if (j + b <= X) dp[i + 1][j + b] = true;
            }
        }
    }

    if (dp[N][X]) cout << "Yes" << endl;
    else cout << "No" << endl;
}