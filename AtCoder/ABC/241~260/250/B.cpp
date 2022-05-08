#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
using Pair = vector<pair<int, int>>;
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

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    
    bool flag_w = true;
    int cnt = 0;
    for (int i = 0; i < A * N; i += A)
    {
        if (cnt % 2 == 0) flag_w = true;
        else flag_w = false;

        for (int j = 0; j < A; j++)
        {
            string s;
            int cnt2 = 0;
            for (int k = 0; k < B * N; k += B)
            {
                if (cnt2 % 2 == 1) flag_w = !flag_w;

                for (int l = 0; l < B; l++)
                {
                    if (flag_w) s += '.';
                    else s += '#';
                }
                cnt2++;
                
                if (cnt % 2 == 0) flag_w = true;
                else flag_w = false;
            }
            cout << s << endl;
        }
        cnt++;
    }
}