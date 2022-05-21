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
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];
    
    int ans = INF;
    for (int goal = 0; goal < 10; goal++)
    {
        vector<int> time(N);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if ((S[i])[j] == ('0' + goal)) time[i] = j;
            }
        }

        sort(all(time));
        int pre_time = time[0];
        for (int i = 1; i < N; i++)
        {
            if (pre_time % 10 == time[i] % 10) {
                time[i] = pre_time + 10;
            }
            pre_time = time[i];
        }
        sort(all(time));
        chmin(ans, time[N - 1]);
    }

    cout << ans << endl;
}