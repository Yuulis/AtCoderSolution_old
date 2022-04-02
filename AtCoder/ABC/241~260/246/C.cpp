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
    ll N, K, X;
    cin >> N >> K >> X;
    vector<ll> A(N);
    ll ans = 0;
    ll all = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        ans += A[i];
        all += A[i] / X;
        A[i] %= X;
    }

    all = min(all, K);
    ans -= all * X;
    K -= all;

    sort(all(A));
    reverse(all(A));
    
    for (int i = 0; i < N; i++)
    {
        if (K == 0) break;

        ans -= A[i];
        K--;
    }

    cout << ans << endl;
}