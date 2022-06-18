#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
using Pair = vector<pair<int, int>>;
using mint = modint998244353;

random_device rd;
default_random_engine eng(rd());
uniform_int_distribution<int> distr(0, 3);

#define all(x) (x).begin(), (x).end()

constexpr auto PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    vector<int> H(3), W(3);
    for (int i = 0; i < 3; i++) cin >> H[i];
    for (int i = 0; i < 3; i++) cin >> W[i];

    int ans = 0;
    for (int a = 1; a < 29; a++)
    {
        for (int b = 1; b < 29; b++)
        {
            for (int d = 1; d < 29; d++)
            {
                for (int e = 1; e < 29; e++)
                {
                    int c = H[0] - a - b;
                    int f = H[1] - d - e;
                    int g = W[0] - a - d;
                    int h = W[1] - b - e;
                    int i = W[2] - c - f;

                    if (c > 0 && f > 0 && g > 0 && h > 0 && i > 0) {
                        if (H[2] == g + h + i) ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;
}