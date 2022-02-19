#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <atcoder/modint.hpp>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
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
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    lld dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    if (dist > (2 * sqrt(5))) { 
        cout << "No" << endl;
        return 0;
    }

    for (ll a = x1-3; a <= x1+3; a++) {
        for (ll b = y2-3; b <= y2+3; b++) {
            lld d1 = sqrt((x1 - a) * (x1 - a) + (y1 - b) * (y1 - b));
            lld d2 = sqrt((x2 - a) * (x2 - a) + (y2 - b) * (y2 - b));

            if (d1 == sqrt(5) && d2 == sqrt(5)) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}