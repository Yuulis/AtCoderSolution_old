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
    int N;
    cin >> N;
    
    map<string, int> map;
    char last{};
    for (int i = 0; i < N; i++)
    {
        string W;
        cin >> W;

        if (i != 0) {
            if (last != W[0]) {
                cout << "No" << endl;
                return 0;
            }
        }

        if (map[W] != 0) {
            cout << "No" << endl;
            return 0;
        }

        map[W]++;
        last = W[W.size() - 1];
    }

    cout << "Yes" << endl;
    return 0;
}