#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <atcoder/modint.hpp>

using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;
using mint = modint998244353;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto MOD = 998244353;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

ll intCeil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //
vector<ll> num;
unordered_map<ll, ll> memo;

mint Solve(ll x) {
    auto iter = memo.find(x);
    if (iter == memo.end()) {
        ll a = x / 2;
        ll b = intCeil(x, 2);

        if (a <= 4 && b <= 4) {
            memo[x] = a * b % MOD;
            return memo[x];
        }

        else {
            mint c = Solve(a);
            mint d = Solve(b);
            
            memo[x] = (c * d).val();
            return memo[x];
        }
    }
    return memo[x];
}

int main() {
    ll N;
    cin >> N;

    if (N <= 4) {
        cout << N << endl;
        return 0;
    }

    mint ans = Solve(N);

    cout << ans.val() << endl;
}