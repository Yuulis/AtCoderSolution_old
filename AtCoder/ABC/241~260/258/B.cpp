#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
using Pair = vector<pair<int, int>>;
using mint = modint998244353;

random_device rd;
default_random_engine eng(rd());
uniform_int_distribution<int> distr(0, 3);

#define all(x) (x).begin(), (x).end()

constexpr auto PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            char c;
            cin >> c;
            A[i][j] = int(c - '0');
        }
    }

    ll ans = 0;
    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            int sx = x;
            int sy = y;

            for (int dy = -1; dy < 2; dy++)
            {
                for (int dx = -1; dx < 2; dx++)
                {
                    if (dy == 0 && dx == 0) continue;

                    string s = to_string(A[sy][sx]);
                    int px = sx;
                    int py = sy;
                    for (int i = 1; i < N; i++)
                    {
                        int nx = px + dx;
                        int ny = py + dy;

                        if (nx < 0) nx = px + N - 1;
                        if (nx >= N) nx = px - N + 1;
                        if (ny < 0) ny = py + N - 1;
                        if (ny >= N) ny = py - N + 1;

                        px = nx;
                        py = ny;
                        s += to_string(A[py][px]);
                    }

                    ll k = stoll(s);
                    chmax(ans, k);
                }
            }
        }
    }

    cout << ans << endl;
}