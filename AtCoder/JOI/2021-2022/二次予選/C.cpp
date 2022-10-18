#include <bits/stdc++.h>
#include <atcoder/all>

#define all(x) (x).begin(), (x).end()
#define fix(x) fixed << setprecision(x)
#define rep(i,start,end) for(int i=(start);i<(int)(end);i++)
#define rrep(i,start,end) for(int i=((int)(start));i>=(end);i--)

constexpr auto PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using mint = modint1000000007;
// using mint = modint998244353;
struct Edge { int to; int cost; };
using Pair = pair<int, int>;
using Graph = vector<vector<Edge>>;

mt19937 mt{ random_device{}() };
uniform_int_distribution<int> rd(0, 3);

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
ll gcd(ll x, ll y) { if (x < y) swap(x, y); ll r; while (y > 0) { r = x % y; x = y; y = r; } return x; }
ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }
ll nCk(ll N, ll K) { if (K < 0 || N < K) return 0; ll ans = 1; for (ll i = 1; i <= K; i++) { ans *= N--; ans /= i; } return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
template <class T1, class T2> inline auto mod(T1 x, T2 r) { return (x % r + r) % r; }

// ======================================== //

int calc_csum(vector<vector<int>> cs, int x1, int y1, int x2, int y2) {
    return  cs[x2 + 1][y2 + 1] + cs[x1][y1] - cs[x1][y2 + 1] - cs[x2 + 1][y1];
}

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    rep(i, 0, H) rep(j, 0, W) cin >> A[i][j];

    vector<vector<int>> cs(H + 1, vector<int>(W + 1, 0));
    rep(i, 0, H) rep(j, 0, W) cs[i + 1][j + 1] = cs[i + 1][j] + cs[i][j + 1] - cs[i][j] + A[i][j];

    int ans = 0;
    rep(i, 0, H) rep(j, 0, W) {
        int csum = calc_csum(cs, 0, 0, i, j);
        
        vector<int> h, w;
        h.push_back(-1);
        w.push_back(-1);
        rep(k, 0, H) if (calc_csum(cs, h.back() + 1, 0, k, j) == csum) h.push_back(k);
        rep(k, 0, W) if (calc_csum(cs, 0, w.back() + 1, i, k) == csum) w.push_back(k);

        if (h.back() != H - 1 || w.back() != W - 1) continue;

        bool flag = true;
        rep(k, 0, h.size() - 1) rep(l, 0, w.size() - 1) if (calc_csum(cs, h[k] + 1, w[l] + 1, h[k + 1], w[l + 1]) != csum) flag = false;

        if (flag) ans++;
    }

    cout << ans - 1 << endl;
}