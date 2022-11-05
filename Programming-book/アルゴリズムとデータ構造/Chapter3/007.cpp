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
    string S;
    cin >> S;
    int l = S.size();

    ll ans = 0;
    for (int bit = 0; bit < (1 << (l - 1)); bit++)
    {
        ll temp = 0;
        for (int i = 0; i < l - 1; i++)
        {
            temp *= 10;
            temp += (int)S[i] - '0';
        
            if (bit & (1 << i)) {
                ans += temp;
                temp = 0;
            }
        }

        temp *= 10;
        temp += (int)S.back() - '0';
        ans += temp;
    }

    cout << ans << endl;
}