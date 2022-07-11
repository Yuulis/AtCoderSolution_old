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

bool solve(string s) {
    if (s.size() == 1) return s == "8";
    else if (s.size() == 2) {
        if (stoi(s) % 8 == 0) return true;
        else {
            swap(s[0], s[1]);
            if (stoi(s) % 8 == 0) return true;
        }
    }

    vector<int> cnt(10);
    for (auto& c : s)
    {
        cnt[c - '0']++;
    }

    for (int i = 112; i < 1000; i += 8)
    {
        vector<int> temp = cnt;
        for (auto& c : to_string(i))
        {
            temp[c - '0']--;
        }

        if (all_of(all(temp), [](int x) { return x >= 0; })) return true;
    }

    return false;
}

int main() {
    string S;
    cin >> S;

    cout << (solve(S) ? "Yes" : "No") << endl;
}