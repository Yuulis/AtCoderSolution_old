#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
using Pair = vector<pair<int, int>>;
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
ll gcd(ll x, ll y) { if (x < y) swap(x, y); ll r; while (y > 0) { r = x % y; x = y; y = r; } return x; }
ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

void rls(string s, vector<pair<char, int>>& v) {
    int cnt = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i - 1]) {
            v.push_back(make_pair(s[i - 1], cnt));
            cnt = 0;
        }
        cnt++;
    }
    v.push_back(make_pair(s.back(), cnt));
}

int main() {
    string S, T;
    cin >> S >> T;

    vector<pair<char, int>> sv, tv;
    rls(S, sv);
    rls(T, tv);

    if (sv.size() != tv.size()) {
        cout << "No" << endl;
        return 0;
    }

    bool ans = true;
    for (int i = 0; i < sv.size(); i++)
    {
        if (sv[i].first != tv[i].first) ans = false;
        if (!(sv[i].second == tv[i].second || sv[i].second < tv[i].second && sv[i].second >= 2)) ans = false;
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}