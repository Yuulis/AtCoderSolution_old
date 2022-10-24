#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
using mint = modint998244353;

random_device rd;
default_random_engine eng(rd());
uniform_int_distribution<int> distr(0, 3);

#define all(x) (x).begin(), (x).end()

constexpr auto PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

typedef pair<int, int> Pair;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
ll gcd(ll x, ll y) { if (x < y) swap(x, y); ll r; while (y > 0) { r = x % y; x = y; y = r; } return x; }
ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i = 0; i < H; i++) cin >> S[i];
    
    Graph dist(H, vector<int>(W));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            dist[i][j] = INF;
        }
    }
    dist[0][0] = 0;

    queue<Pair> queue;
    queue.push(Pair(0, 0));
    while (!queue.empty())
    {
        Pair pos = queue.front();
        queue.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = pos.first + dx[i];
            int ny = pos.second + dy[i];

            if (nx < 0 || nx >= H) continue;
            if (ny < 0 || ny >= W) continue;
            if (dist[nx][ny] != INF) continue;
            if (S[pos.first][pos.second] == S[nx][ny]) continue;
            
            dist[nx][ny] = dist[pos.first][pos.second] + 1;
            queue.push(Pair(nx, ny));
        }
    }

    int ans = dist[H - 1][W - 1];
    if (ans != INF) cout << ans << endl;
    else cout << -1 << endl;
}