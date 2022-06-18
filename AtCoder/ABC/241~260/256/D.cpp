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
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int N;
    cin >> N;
    
    vector<int> num(200010);
    vector<int> sum(200010);
    for (int i = 0; i < N; i++)
    {
        int l, r;
        cin >> l >> r;
        
        num[l]++;
        num[r]--;
    }

    sum[0] = num[0];
    for (int i = 1; i < 200010; i++)
    {
        sum[i] += sum[i - 1] + num[i];
    }

    bool flag = false;
    for (int i = 0; i < 200010; i++)
    {
        if (sum[i] > 0 && !flag) {
            cout << i << " ";
            flag = true;
        }
        else if (sum[i] <= 0 && flag) {
            cout << i << endl;
            flag = false;
        }
    }
}