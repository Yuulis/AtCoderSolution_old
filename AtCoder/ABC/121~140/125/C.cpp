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

int op(int a, int b) {
    return gcd(a, b);
}

int e() {
    return INF;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(101010);
    rep(i, 0, N) cin >> A[i];

    vector<int> l(101010), r(101010);
    l[0] = A[0];
    rep(i, 1, N) l[i] = gcd(l[i - 1], A[i]);

    r[N - 1] = A[N - 1];
    rrep(i, N - 2, 0) r[i] = gcd(r[i + 1], A[i]);

    int ans = 0;
    rep(i, 0, N) {
        int g = 0;
        if (0 < i) g = gcd(g, l[i - 1]);
        g = gcd(g, r[i + 1]);

        chmax(ans, g);
    }

    cout << ans << endl;
}