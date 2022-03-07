#include <bits/stdc++.h>
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
    int N, M;
    cin >> N >> M;
    vector<int> S(N), T(M);
    vector<bool> s(2), t(2);
    for (int i = 0; i < N; i++) { 
        cin >> S[i];
        s[S[i]] = true;
    }
    for (int i = 0; i < M; i++) { 
        cin >> T[i];
        t[T[i]] = true;
    }

    int k = INF;
    int ans = 0;
    if (!((t[0] && !s[0]) || (t[1] && !s[1]))) {
        for (int i = 0; i < N; i++)
        {
            if (S[i] != S[0]) k = min(k, min(i, N - i));
        }

        bool flag = false;
        int next = S[0];
        for (int i = 0; i < M; i++)
        {
            if (T[i] != next) {
                if (!flag) {
                    ans += k;
                    flag = true;
                }
                else ans++;

                next = T[i];
            }

            ans++;
        }
    }
    else ans = -1;

    cout << ans << endl;
}