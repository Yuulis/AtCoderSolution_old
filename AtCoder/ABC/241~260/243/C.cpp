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

struct people {
    ll x;
    ll y;
    char dir;
};

int main() {
    int N;
    cin >> N;
    map<int, vector<pair<int, int>>> people;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        people[y].emplace_back(x, i);
    }
    string S;
    cin >> S;

    for (auto& p : people)
    {
        sort(all(p.second));

        bool l = false, r = false;
        for (auto& i : p.second)
        {
            if (S[i.second] == 'L') {
                if (r) {
                    cout << "Yes" << endl;
                    return 0;
                }
                l = true;
            }
            else {
                r = true;
            }
        }
    }

    cout << "No" << endl;
}