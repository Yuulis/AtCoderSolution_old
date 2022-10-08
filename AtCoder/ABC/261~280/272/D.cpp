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

vector<vector<int>> dist;

vector<pair<int, int>> calc_diff(int r) {
    vector<pair<int, int>> res;
    rep(x, -1000, 1001) rep(y, -1000, 1001) {
        if (x * x + y * y == r) res.push_back(make_pair(x, y));
    }
    return res;
}


int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> ans(N, vector<int>(N, -1));

    dist.assign(N, vector<int>(N, INF));
    vector<pair<int, int>> diff = calc_diff(M);
    queue<pair<int, int>> que;
    que.emplace(make_pair(0, 0));
    dist[0][0] = 0;
    while (que.size() != 0)
    {
        pair<int, int> now = que.front();
        que.pop();

        rep(gy, 0, N) rep(gx, 0, N) {
            if (now.first == gy && now.second == gx) {
                break;
            }

            rep(i, 0, diff.size()) {
                int ny = now.first + diff[i].first;                            
                int nx = now.second + diff[i].second;                           
                if (ny < 0 || N <= ny || nx < 0 || N <= nx) continue;                     
                if (dist[ny][nx] != INF) continue;                     
                que.push(make_pair(ny, nx));
                dist[ny][nx] = dist[now.first][now.second] + 1;
            }

            ans[gy][gx] = dist[gy][gx];
        }
    }

    rep(i, 0, N) {
        rep(j, 0, N) {
            if (j == 0) cout << ans[i][j];
            else cout << " " << ans[i][j];
        }
        cout << endl;
    }
}