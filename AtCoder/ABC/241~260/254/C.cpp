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

ll intCeil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

bool isOrder(vector<ll> v) {
    ll l = v.size();
    for (ll i = 1; i < l; i++)
    {
        if (v[i] < v[i - 1]) return false;
    }
    return true;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    vector<vector<int>> b(K);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        b[i % K].push_back(a[i]);
    }

    sort(all(a));

    for (int i = 0; i < K; i++)
    {
        sort(b[i].rbegin(), b[i].rend());
    }

    vector<int> na;
    for (int i = 0; i < N; i++)
    {
        na.push_back(b[i % K].back());
        b[i % K].pop_back();
    }

    if (a == na) cout << "Yes" << endl;
    else cout << "No" << endl;
} 