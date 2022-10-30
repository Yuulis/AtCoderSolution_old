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
using Pair_int = pair<int, int>;
using Pair_ll = pair<ll, ll>;
using Graph = vector<vector<Edge>>;

random_device rd;
default_random_engine eng(rd());
uniform_int_distribution<ll> range(-10000, 10000);

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
ll gcd(ll x, ll y) { if (x < y) swap(x, y); ll r; while (y > 0) { r = x % y; x = y; y = r; } return x; }
ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }
ll nCk(ll N, ll K) { if (K < 0 || N < K) return 0; ll ans = 1; for (ll i = 1; i <= K; i++) { ans *= N--; ans /= i; } return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
template <class T1, class T2> inline auto mod(T1 x, T2 r) { return (x % r + r) % r; }

// ======================================== //
int N, A, B, C;
int ans = INF;
vector<int> L;
vector<int> flag(8);

void dfs(int x) {
    if (x == N) {
        int a = 0, b = 0, c = 0;
        int cnt_a = 0, cnt_b = 0, cnt_c = 0;
        rep(i, 0, N) {
            if (flag[i] == 0) {
                a += L[i];
                cnt_a++;
            }
            if (flag[i] == 1) {
                b += L[i];
                cnt_b++;
            }
            if (flag[i] == 2) {
                c += L[i];
                cnt_c++;
            }
        }

        if (cnt_a == 0 || cnt_b == 0 || cnt_c == 0) return;

        int mp = (cnt_a - 1) * 10 + (cnt_b - 1) * 10 + (cnt_c - 1) * 10;
        mp += abs(A - a) + abs(B - b) + abs(C - c);
        chmin(ans, mp);

        return;
    }

    rep(i, 0, 4) {
        flag[x] = i;
        dfs(x + 1);
    }
}


int main() {
    cin >> N >> A >> B >> C;
    L.resize(N);
    rep(i, 0, N) cin >> L[i];

    dfs(0);

    cout << ans << endl;
}