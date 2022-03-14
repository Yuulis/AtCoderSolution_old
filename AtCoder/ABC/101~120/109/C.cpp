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

ll gcd(ll x, ll y) {
    if (x < y) swap(x, y);
    ll r;
    while (y > 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main() {
    ll N, X;
    cin >> N >> X;
    vector<ll> x(N);
    for (int i = 0; i < N; i++) cin >> x[i];

    ll g = 0;
    for (int i = 0; i < N; i++)
    {
        g = gcd(g, abs(X - x[i]));
    }

    cout << g << endl;
}