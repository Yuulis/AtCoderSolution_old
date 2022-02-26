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
    int Q;
    cin >> Q;

    multiset<ll> set;
    for (int i = 0; i < Q; i++)
    {
        int c;
        cin >> c;

        if (c == 1) {
            ll x;
            cin >> x;
            set.insert(x);
        }

        else {
            ll x, k;
            cin >> x >> k;

            if (c == 2) {
                bool flag = true;
                auto itr = set.upper_bound(x);
                for (int j = 0; j < k; j++)
                {
                    if (itr == set.begin()) {
                        flag = false;
                        break; 
                    }
                    itr--;
                }
                if (!flag) cout << -1 << endl;
                else cout << *itr << endl;
            }

            if (c == 3) {
                bool flag = true;
                auto itr = set.lower_bound(x);
                for (int j = 0; j < k - 1; j++)
                {
                    if (itr == set.end()) { 
                        flag = false;
                        break; 
                    }
                    itr++;
                }
                if (itr == set.end()) flag = false;
                if (!flag) cout << -1 << endl;
                else cout << *itr << endl;
            }
        }
    }
}