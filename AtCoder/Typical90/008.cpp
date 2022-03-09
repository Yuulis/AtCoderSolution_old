#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

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
    int N;
    string S;
    cin >> N >> S;
    vector<vector<mint>> dp(101010, vector<mint>(8));

    dp[0][0] = 1;
    for (int i = 0; i < S.size(); i++)
    {
        for (int j = 0; j < 8; j++)
        {
            dp[i + 1][j] += dp[i][j];

            if ((S[i] == 'a' && j == 0) ||
                (S[i] == 't' && j == 1) ||
                (S[i] == 'c' && j == 2) ||
                (S[i] == 'o' && j == 3) ||
                (S[i] == 'd' && j == 4) ||
                (S[i] == 'e' && j == 5) ||
                (S[i] == 'r' && j == 6)
               ) 
            {
                dp[i + 1][j + 1] += dp[i][j];
            }
        }
    }

    cout << dp[S.size()][7].val() << endl;
}