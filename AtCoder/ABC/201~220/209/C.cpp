#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <atcoder/modint.hpp>

using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

ll intCeil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    ll N;
    cin >> N;
    vector<ll> C(N);
    for (int i = 0; i < N; i++) cin >> C[i];

    sort(all(C));

    mint ans = 1;
    for (int i = 0; i < N; i++) {
        if (C[i] - i + 1 < 0) {
            cout << 0 << endl;
            return 0;
        }

        else ans *= (C[i] - i);
    }

    cout << ans.val() << endl;
}