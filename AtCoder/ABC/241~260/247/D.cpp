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
    int Q;
    cin >> Q;

    queue<ll> num;
    queue<ll> cnt;
    for (int i = 0; i < Q; i++)
    {
        int q;
        cin >> q;
        if (q == 1) {
            ll x, c;
            cin >> x >> c;

            num.push(x);
            cnt.push(c);
        }
        else if (q == 2) {
            ll c;
            cin >> c;

            ll ans = 0;
            while (c > 0)
            {
                if (c >= cnt.front()) {
                    c -= cnt.front();
                    ans += num.front() * cnt.front();

                    num.pop();
                    cnt.pop();
                }
                else {
                    cnt.front() -= c;
                    ans += num.front() * c;
                    c = 0;
                }
            }

            cout << ans << endl;
        }
    }
}