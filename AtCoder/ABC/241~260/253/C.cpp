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
    int Q;
    cin >> Q;
    map<ll, ll> num;
    
    for (int i = 0; i < Q; i++)
    {
        int n;
        cin >> n;
        if (n == 1) {
            int x;
            cin >> x;
            num[x]++;
        }
        else if (n == 2) {
            int x, c;
            cin >> x >> c;

            num[x] -= min(num[x], (ll)c);
            if (num[x] == 0) num.erase(x);
        }
        else {
            int l = num.size();
            cout << num.rbegin()->first - num.begin()->first << endl;
        }
    }
}