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

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    cout << fixed << setprecision(10) << N << endl;
}

int N, M;
vector<vector<int>> C(M, vector<int>(N));
for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
        cin >> C[i][j];
    }
}
vector<vector<ll>> v;
v.resize(N);
for (int i = 0; i < N; i++) {
    ll L;
    cin >> L;

    v[i].resize(L);
    for (int j = 0; j < L; j++) {
        cin >> v[i][j];
    }
}
set<int> E;