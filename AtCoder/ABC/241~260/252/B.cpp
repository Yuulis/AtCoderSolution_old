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
    int N, K;
    cin >> N >> K;
    vector<int> A(N), B(K), memo(K);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < K; i++) cin >> B[i];
    
    for (int i = 0; i < K; i++)
    {
        memo[i] = A[B[i] - 1];
    }
    sort(all(A));
    reverse(all(A));

    int pre_a = A[0];
    for (int i = 0; i < N; i++)
    {
        if (A[i] != pre_a) break;
        
        for (auto& m : memo)
        {
            if (m == A[i]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}