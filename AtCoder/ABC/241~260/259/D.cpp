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
ll gcd(ll x, ll y) { if (x < y) swap(x, y); ll r; while (y > 0) { r = x % y; x = y; y = r; } return x; }
ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //
bool detectCollisionCircle(ll x1, ll y1, ll r1, ll x2, ll y2, ll r2) {
    lld a = x1 - x2;
    lld b = y1 - y2;
    lld c = a * a + b * b;
    
    if (c > (r1 + r2) * (r1 + r2)) return false;
    if (c < (r1 - r2) * (r1 - r2)) return false;
    else true;
}

int N;
ll sx, sy, tx, ty;
vector<ll> x(3005), y(3005), r(3005);
Graph G(3005);
int S, T;

vector<bool> seen(3005);
bool dfs(int v) {
    seen[v] = true;
    if (v == T) return true;

    for (auto next_v : G[v]) {
        if (seen[next_v]) continue;
        if (dfs(next_v)) return true;
    }

    return false;
}

int main() {
    cin >> N;
    cin >> sx >> sy >> tx >> ty;
    for (int i = 1; i <= N; i++) {
        cin >> x[i] >> y[i] >> r[i];

        if ((x[i] - sx) * (x[i] - sx) + (y[i] - sy) * (y[i] - sy) == r[i] * r[i]) S = i;
        if ((x[i] - tx) * (x[i] - tx) + (y[i] - ty) * (y[i] - ty) == r[i] * r[i]) T = i;
    }
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            ll d = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            if (d > (r[i] + r[j]) * (r[i] + r[j]) || d < (r[i] - r[j]) * (r[i] - r[j])) continue;
            G[i].push_back(j), G[j].push_back(i);
        }
    }

    if (dfs(S)) cout << "Yes" << endl;
    else cout << "No" << endl;
}