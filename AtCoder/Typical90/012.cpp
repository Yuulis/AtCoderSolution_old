#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;
using mint = modint998244353;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

ll intCeil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int H, W, Q;
    cin >> H >> W >> Q;

    dsu uf(H * W);
    vector<vector<bool>> memo(2010, vector<bool>(2010, false));
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    for (int i = 0; i < Q; i++)
    {
        int t;
        cin >> t;

        if (t == 1) {
            int r, c;
            cin >> r >> c;

            for (int j = 0; j < 4; j++)
            {
                int x = r + dx[j];
                int y = c + dy[j];

                if (!memo[x][y]) continue;

                int h1 = (r - 1) * W + (c - 1);
                int h2 = (x - 1) * W + (y - 1);
                uf.merge(h1, h2);
            }

            memo[r][c] = true;
        }
        else if (t == 2) {
            int ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;

            bool flag = true;
            if (!memo[ra][ca] || !memo[rb][cb]) flag = false;

            int h1 = (ra - 1) * W + (ca - 1);
            int h2 = (rb - 1) * W + (cb - 1);
            if (!uf.same(h1, h2)) flag = false;

            if (flag) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}