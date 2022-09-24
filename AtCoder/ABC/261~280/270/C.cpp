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

// dijkstra法
vector<int> dijkstra(Graph graph, int n, int start, int INF, vector<int>& prev) {
    priority_queue<Pair, vector<Pair>, greater<Pair>> que;
    vector<int> dist(n, INF);
    dist[start] = 0;
    que.push(make_pair(0, start));
    while (que.size()) {
        int d = que.top().first;
        int u = que.top().second;
        que.pop();
        if (dist[u] < d) continue;
        rep(i, 0, graph[u].size()) {
            int v = graph[u][i].to;
            int cost = graph[u][i].cost;
            if (dist[v] > d + cost) {
                dist[v] = d + cost;
                que.push(make_pair(dist[v], v));
                prev[v] = u;
            }
        }
    }
    return dist;
}

// 経路復元
vector<int> get_path(vector<int> prev, int start, int goal) {
    vector<int> path;
    for (int t = goal; t != -1; t = prev[t]) path.push_back(t);
    reverse(path.begin(), path.end());
    return path;
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    X--;
    Y--;
    Graph G(N);
    rep(i, 0, N - 1) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(Edge{ v, 1 });
        G[v].push_back(Edge{ u, 1 });
    }

    vector<int> prev(N, -1);
    vector<int> dst = dijkstra(G, N, X, INF, prev);
    vector<int> ans = get_path(prev, X, Y);
    rep(i, 0, ans.size()) {
        if (i == 0) cout << ans[i] + 1;
        else cout << " " << ans[i] + 1;
    }
}