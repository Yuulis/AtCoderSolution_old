#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
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

int main() {
    int N;
    string T;
    cin >> N >> T;

    int dir = 0;
    int x = 0, y = 0;
    for (int i = 0; i < N; i++)
    {
        if (T[i] == 'S') {
            if (dir == 0) x++;
            else if (dir == 1) y--;
            else if (dir == 2) x--;
            else y++;
        }
        else {
            dir++;
            dir %= 4;
        }
    }

    cout << x << " " << y << endl;
}