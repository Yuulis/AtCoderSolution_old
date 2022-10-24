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

vector<vector<int>> keys = {
    {7, 8, 9},
    {4, 5, 6},
    {1, 2, 3},
    {0, -1, -1}
};
vector<int> dx = { 0, 1, 0, -1 };
vector<int> dy = { -1, 0, 1, 0 };

int main() {
    int M, R;
    cin >> M >> R;

    vector<vector<vector<int>>> dist(4, vector<vector<int>>(3, vector<int>(101010, INF)));
    vector<vector<vector<bool>>> flag(4, vector<vector<bool>>(3, vector<bool>(101010)));
    queue<vector<int>> que;
    que.push({ 3, 0, 0 });
    dist[3][0][0] = 0;
    while (!que.empty())
    {
        auto v = que.front();
        que.pop();

        int y = v[0], x = v[1], mod = v[2];
        rep(i, 0, 4) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (0 <= nx && nx < 3 && 0 <= ny && ny < 4) {
                if (keys[ny][nx] == -1) continue;

                chmin(dist[ny][nx][mod], dist[y][x][mod] + 1);
                if (!flag[ny][nx][mod]) {
                    flag[ny][nx][mod] = true;
                    que.push({ny, nx, mod});
                }
            }
        }

        int nmod = (mod * 10 + keys[y][x]) % M;
        chmin(dist[y][x][nmod], dist[y][x][mod] + 1);

        if (!flag[y][x][nmod]) {
            flag[y][x][nmod] = true;
            que.push({ y, x, nmod });
        }
    }

    int ans = INF;
    rep(y, 0, 4) rep(x, 0, 3) chmin(ans, dist[y][x][R]);

    cout << ans << endl;
}