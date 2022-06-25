#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
using Pair = vector<pair<ll, char>>;
using mint = modint998244353;

random_device rd;
default_random_engine eng(rd());
uniform_int_distribution<int> distr(0, 3);

#define all(x) (x).begin(), (x).end()

constexpr auto PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    ll N;
    cin >> N;
    string S;
    cin >> S;
    ll ans = 0;
    Pair pair;
    for (int i = 0; i < N; i++)
    {
        int w;
        cin >> w;
        pair.push_back(make_pair(w, S[i]));
        if (S[i] == '1') ans++;
    }
    sort(all(pair));

    ll temp_ans = ans;
    for (int i = 0; i < N; i++)
    {
        if (pair[i].second == '1') temp_ans--;
        else temp_ans++;

        if (i < N - 1) {
            if (pair[i].first != pair[i + 1].first) chmax(ans, temp_ans);
        }
        else chmax(ans, temp_ans);
    }

    cout << ans << endl;
}