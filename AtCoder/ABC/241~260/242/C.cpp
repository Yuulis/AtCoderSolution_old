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

int main() {
    int N;
    cin >> N;

    vector<mint> cnt(9, 1);
    for (int i = 0; i < N - 1; i++)
    {
        vector<mint> temp = cnt;
        for (int j = 0; j < 9; j++)
        {
            if (j == 0) temp[j] = cnt[j] + cnt[j + 1];
            else if (j == 8) temp[j] = cnt[j - 1] + cnt[j];
            else temp[j] = cnt[j - 1] + cnt[j] + cnt[j + 1];
        }
        cnt = temp;
    }

    mint ans;
    for (int i = 0; i < 9; i++)
    {
        ans += cnt[i];
    }

    cout << ans.val() << endl;
}