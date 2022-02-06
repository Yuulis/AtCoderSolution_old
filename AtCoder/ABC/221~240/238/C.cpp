#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <atcoder/modint.hpp>

using namespace std;
using namespace atcoder;
using Graph = vector<vector<int>>;
using mint = modint998244353;
using ll = long long;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;
constexpr auto MOD = 998244353;

ll intCeil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

mint sum(ll x) {
    return mint(x + 1) * x / 2;
}

int main() {
    ll N;
    cin >> N;
    
    mint ans = 0;
    ll l = 1;
    while (l <= N) {
        ll r = l * 10;

        ll len = min(N + 1, r) - l;
        ans += sum(len);

        l *= 10;
    }

    cout << ans.val() << endl;
}