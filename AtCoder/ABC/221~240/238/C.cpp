#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;
constexpr auto MOD = 998244353;

ll intCeil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

ll calcF(ll a, ll b) {
    return (1 + (b - a + 1)) * (b - a + 1) / 2;
}

int main() {
    ll N;
    cin >> N;

    string s = to_string(N);
    ll x = s.size();
    x--;

    ll ans = 0;

    for (ll i = 0; i < x; i++) {
        if (i == 0) ans += 45;

        else ans += calcF(pow(10, i), pow(10, i + 1) - 1) % MOD;
        ans %= MOD;
    }

    ans += calcF(pow(10, x), N) % MOD;
    ans %= MOD;

    cout << ans << endl;
}