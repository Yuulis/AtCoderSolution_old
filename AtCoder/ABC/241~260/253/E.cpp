#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
using Pair = vector<pair<int, int>>;
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
    int N, M, K;
    cin >> N >> M >> K;
    mint sum = 0;
    
    vector<vector<mint>> dp(1010, vector<mint>(5050, 0));
    for (int i = 1; i <= N; i++)
    {
        vector<mint> sum(M + 1, 0);
        for (int cnt = 1; cnt <= M; cnt++) sum[cnt] = sum[cnt - 1] + dp[i - 1][cnt];

        for (int j = 1; j <= M; j++)
        {
            if (i == 1) dp[i][j] = 1;

            else {
                if (j - K >= 1) {
                    dp[i][j] += sum[j - K];
                }
                if (j + K <= M) {
                    dp[i][j] += sum[M] - sum[j + K - 1];
                }
                if (K == 0) dp[i][j] += -sum[j] + sum[j - 1];
            }
        }
    }

    for (int j = 1; j <= M; j++)
    {
        sum += dp[N][j];
    }

    cout << sum.val() << endl;
}