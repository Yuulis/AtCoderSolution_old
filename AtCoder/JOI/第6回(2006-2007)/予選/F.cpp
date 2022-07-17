#include <bits/stdc++.h>
#include <atcoder/all>

#define all(x) (x).begin(), (x).end()
#define fix(x) fixed << setprecision(x)

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

random_device rd;
default_random_engine eng(rd());
uniform_int_distribution<int> distr(0, 3);

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
ll gcd(ll x, ll y) { if (x < y) swap(x, y); ll r; while (y > 0) { r = x % y; x = y; y = r; } return x; }
ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    vector<vector<bool>> pass(20, vector<bool>(20, true));
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        pass[x][y] = false;
    }

    vector<vector<int>> num(20, vector<int>(20, 0));
    num[1][1] = 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            num[i + 1][j] += pass[i + 1][j] * num[i][j];
            num[i][j + 1] += pass[i][j + 1] * num[i][j];
        }
    }

    cout << num[a][b] << endl;
}