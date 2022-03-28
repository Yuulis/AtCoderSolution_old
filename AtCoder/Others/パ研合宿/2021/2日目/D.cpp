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
    int N, M;
    cin >> N >> M;
    map<ll, int> mp;
    for (int i = 0; i < N; i++)
    {
        ll A;
        cin >> A;
        mp[A]++;
    }

    int minv = INF, maxv = 0;
    for (auto& p : mp)
    {
        int x = p.second;
        minv = min(minv, x);
        maxv = max(maxv, x);
    }

    if (mp.size() != M) minv = 0;

    cout << minv << " " << maxv << endl;
}