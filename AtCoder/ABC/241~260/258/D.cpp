#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
using Pair = vector<pair<ll, ll>>;
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
    ll N, X;
    cin >> N >> X;
    vector<ll> A(N), B(N), sum(N), time(N);
    ll m = INFL;
    ll s = 0;
    for (int i = 0; i < N; i++) {
        if (i + 1 > X) break;

        cin >> A[i] >> B[i];
        sum[i] = A[i] + B[i];
        time[i] = s + sum[i] + B[i] * (X - i - 1);
        s += sum[i];
        
        chmin(m, time[i]);
    }

    cout << m << endl;
}