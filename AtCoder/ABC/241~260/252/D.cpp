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
    vector<int> A(N);
    map<int, ll> cnt, sum;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        cnt[A[i]]++;
    }

    sort(all(A));
    int prev = 0;
    for (auto itr = cnt.begin(); itr != cnt.end(); itr++) 
    {
        int val = itr->first;
        sum[val] += cnt[val] + prev;
        prev = sum[val];
    }

    ll ans = 0;
    for (int i = 1; i < N - 1; i++)
    {
        int j = A[i];
        ans += (sum[j] - cnt[j]) * (sum[A[A.size() - 1]] - sum[j]);
    }

    cout << ans << endl;
}