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

ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }

int main() {
    ll N, A, B;
    cin >> N >> A >> B;
    
    ll nA = N / A, nB = N / B, nAB = N / (lcm(A, B));

    ll sumA = (A + (A * nA)) * nA / 2;
    ll sumB = (B + (B * nB)) * nB / 2;
    ll sumAB = (lcm(A, B) + (lcm(A, B) * nAB)) * nAB / 2;
    ll all = (1 + N) * N / 2;

    cout << all - (sumA + sumB) + sumAB << endl;
}