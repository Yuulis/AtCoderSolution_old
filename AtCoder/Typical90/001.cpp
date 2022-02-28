#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
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
ll N, L, K;
vector<ll> A(1 << 18);

bool condition(ll n) {
    ll cnt = 0, temp = 0;
    for (ll i = 1; i <= N; i++)
    {
        if (A[i] - temp >= n && L - A[i] >= n) {
            cnt++;
            temp = A[i];
        }
    }
    if (cnt >= K) return true;
    else return false;
}

int main() {
    cin >> N >> L >> K;
    for (ll i = 1; i <= N; i++) cin >> A[i];

    ll l = -1, r = L + 1;
    while (r - l > 1)
    {
        ll mid = l + (r - l) / 2;
        if (!condition(mid)) r = mid;
        else l = mid;
    }

    cout << l << endl;
}