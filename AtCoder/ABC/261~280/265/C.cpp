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
using Pair = pair<int, int>;

mt19937 mt{ random_device{}() };
uniform_int_distribution<int> rd(0, 3);

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
ll gcd(ll x, ll y) { if (x < y) swap(x, y); ll r; while (y > 0) { r = x % y; x = y; y = r; } return x; }
ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }
ll nCk(ll N, ll K) { if (K < 0 || N < K) return 0; ll ans = 1; for (ll i = 1; i <= K; i++) { ans *= N--; ans /= i; } return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> G(H, vector<char>(W));
    rep(i, 0, H) rep(j, 0, W) cin >> G[i][j];

    int i = 0;
    int j = 0;
    vector<vector<bool>> flag(H, vector<bool>(W, false));
    flag[i][j] = true;

    while (true)
    {

        if (G[i][j] == 'U') {
            i--;
            if (i == -1) {
                i++;
                break;
            }
        }
        else if (G[i][j] == 'D') {
            i++;
            if (i == H) {
                i--;
                break;
            }
        }
        else if (G[i][j] == 'L') {
            j--;
            if (j == -1) {
                j++;
                break;
            }
        }
        else if (G[i][j] == 'R') {
            j++;
            if (j == W) {
                j--;
                break;
            }
        }

        if (flag[i][j]) {
            cout << -1 << endl;
            return 0;
        }
        else flag[i][j] = true;
    }

    cout << i + 1 << " " << j + 1 << endl;
}