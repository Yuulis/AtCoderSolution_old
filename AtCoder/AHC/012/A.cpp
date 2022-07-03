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
uniform_int_distribution<ll> distr(-10000, 10000);

#define all(x) (x).begin(), (x).end()

constexpr auto PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

vector<ll> px, py, qx, qy;

void Answer(int k) {
    cout << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << px[i] << " " << py[i] << " " << qx[i] << " " << qy[i] << endl;
    }
}

int main() {
    ll N, K;
    cin >> N >> K;
    vector<int> a(10);
    for (int i = 0; i < 10; i++) cin >> a[i];
    vector<ll> x(N), y(N);
    for (int i = 0; i < N; i++) cin >> x[i] >> y[i];

    for (int i = 0; i < K; i++)
    {
        px.push_back(distr(eng));
        py.push_back(distr(eng));
        qx.push_back(distr(eng));
        qy.push_back(distr(eng));
    }

    Answer(K);
}