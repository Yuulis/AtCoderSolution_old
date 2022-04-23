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

vector<int> divisor(int n) {
    vector<int> ret;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(all(ret));
    return ret;
}

int main() {
    int N;
    cin >> N;
    map<int, ll> map;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        map[A]++;
    }
    
    ll ans = 0;
    for (auto& m : map)
    {
        int n = m.first;
        int x = m.second;

        vector<int> v = divisor(n);
        for (int i = 0; i < intCeil(v.size(), 2); i++)
        {
            int a = v[i];
            int b = v[v.size() - i - 1];

            if (a == b) ans += (map[a] * map[b]) * x;
            else ans += (map[a] * map[b] * 2) * x;
        }
    }

    cout << ans << endl;
}