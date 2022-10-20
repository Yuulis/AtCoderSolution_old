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

int N, M, Q;

struct Input {
    int a;
    int b;
    int c;
    int d;
};
vector<Input> input;

int ans = 0;
vector<int> A(10);
void duplication_permutation(int depth = 0, int min = 1) {
    if (depth == N) {
        int sum = 0;
        for (auto& v : input)
        {
            if (A[v.b] - A[v.a] == v.c) sum += v.d;
            chmax(ans, sum);
        }

        return;
    }
    else {
        rep(i, min, M + 1) {
            A[depth] = i;
            duplication_permutation(depth + 1, i);
        }
    }
}

int main() {
    cin >> N >> M >> Q;
    input.resize(Q);
    rep(i, 0, Q) {
        cin >> input[i].a >> input[i].b >> input[i].c >> input[i].d;
        input[i].a--;
        input[i].b--;
    }

    duplication_permutation();

    cout << ans << endl;
}