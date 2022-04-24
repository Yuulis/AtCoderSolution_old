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

int H, W;
vector<string> c;
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, -0, -1 };

vector<vector<bool>> seen(510, vector<bool>(510, false));
void dfs(int h, int w) {
    seen[h][w] = true;

    for (int i = 0; i < 4; i++)
    {
        int nh = h + dx[i];
        int nw = w + dy[i];

        if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        if (c[nh][nw] == '#') continue;
        if (seen[nh][nw]) continue;

        dfs(nh, nw);
    }
}

int main() {
    cin >> H >> W;
    c.resize(H);
    for (int i = 0; i < H; i++) cin >> c[i];

    int s_h = 0, s_w = 0, g_h = 0, g_w = 0;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (c[i][j] == 's') {
                s_h = i;
                s_w = j;
            }
            if (c[i][j] == 'g') {
                g_h = i;
                g_w = j;
            }
        }
    }

    dfs(s_h, s_w);

    if (seen[g_h][g_w]) cout << "Yes" << endl;
    else cout << "No" << endl;
}