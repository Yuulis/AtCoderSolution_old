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

int main() {
    int H, W, R, C;
    cin >> H >> W >> R >> C;

    if (H == 1 && W == 1) cout << 0 << endl;
    else if (H == 1) {
        if (C == 1 || C == W) cout << 1 << endl;
        else cout << 2 << endl;
    }
    else if (W == 1) {
        if (R == 1 || R == H) cout << 1 << endl;
        else cout << 2 << endl;
    }
    
    else if ((R == 1 && C == 1) || (R == 1 && C == W) || (R == H && C == 1) || (R == H && C == W)) cout << 2 << endl;
    else if (R == 1 || R == H || C == 1 || C == W) cout << 3 << endl;
    else cout << 4 << endl;
}