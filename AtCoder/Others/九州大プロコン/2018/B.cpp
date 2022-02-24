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
    vector<ll> A(Q), B(Q), C(Q);
    for (int i = 0; i < Q; i++) {
        cin >> A[i] >> B[i] >> C[i];
    }

    for (int i = 0; i < Q; i++) {
        ll sum = 100 * A[i] + 10 * B[i] + C[i];

        if (sum % 2 != 0) cout << "No" << endl;
        else {
            sum /= 2;
            sum -= min(A[i], sum / 100) * 100;
            sum -= min(B[i], sum / 10) * 10;
            sum -= min(C[i], sum / 1) * 1;

            if (sum == 0) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}