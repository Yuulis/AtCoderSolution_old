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
    int N, M;
    cin >> N >> M;
    vector<int> c(M), s(M);
    for (int i = 0; i < M; i++) {
        cin >> s[i] >> c[i];
        s[i]--;
    }

    for (int num = 0; num < 1000; num++) {
        string s_num = to_string(num);
        if (s_num.size() != N) continue;

        bool flag = true;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (j == s[i] && (s_num[j] - '0') != c[i]) flag = false;
            }
        }

        if (flag) {
            cout << num << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}