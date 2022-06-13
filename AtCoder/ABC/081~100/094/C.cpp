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
    vector<int> X(N), A(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
        A[i] = X[i];
    }
    sort(all(A));

    map<int, int> map;
    for (int i = N - 1; i >= 0; i--)
    {
        map[A[i]] = i;
    }

    for (int i = 0; i < N; i++)
    {
        int k = map[X[i]];
        
        if (k < N / 2)  cout << A[N / 2] << endl;
        else cout << A[N / 2 - 1] << endl;
    }
}