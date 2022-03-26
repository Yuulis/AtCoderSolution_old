#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
using mint = modint998244353;

#define all(x) (x).begin(), (x).end()

constexpr auto PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

ll intCeil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    vector<vector<int>> dp(202020, vector<int>(2, 0));
    dp[0][0] = 1;
    dp[0][1] = 1;

    for (int i = 0; i < N - 1; i++)
    {
        if (abs(A[i + 1] - A[i]) <= K && dp[i][0] != 0) dp[i + 1][0]++;
        if (abs(A[i + 1] - B[i]) <= K && dp[i][1] != 0) dp[i + 1][0]++;

        if (abs(B[i + 1] - A[i]) <= K && dp[i][0] != 0) dp[i + 1][1]++;
        if (abs(B[i + 1] - B[i]) <= K && dp[i][1] != 0) dp[i + 1][1]++;
    }

    if (dp[N - 1][0] || dp[N - 1][1]) cout << "Yes" << endl;
    else cout << "No" << endl;
}