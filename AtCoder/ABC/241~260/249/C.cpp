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
    int N, K;
    cin >> N >> K;
    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];
    
    int ans = 0;
    for (int bit = 0; bit < (1 << N); bit++)
    {
        map<char, int> map;
        for (int i = 0; i < N; i++)
        {
            if (bit & (1 << i)) {
                for (auto& c : S[i])
                {
                    map[c]++;
                }
            }
        }

        int cnt = 0;
        for (auto& m : map)
        {
            if (m.second == K) cnt++;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;
}