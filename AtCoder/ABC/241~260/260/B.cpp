#include <bits/stdc++.h>
#include <atcoder/all>

#define all(x) (x).begin(), (x).end()
#define fix(x) fixed << setprecision(x)

constexpr auto PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using mint = modint1000000007;
// using mint = modint998244353;
using Pair = pair<int, int>;

random_device rd;
default_random_engine eng(rd());
uniform_int_distribution<int> distr(0, 3);

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
ll gcd(ll x, ll y) { if (x < y) swap(x, y); ll r; while (y > 0) { r = x % y; x = y; y = r; } return x; }
ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

bool compare(const Pair& a, const Pair& b) {
    int a_score = a.first;
    int a_num = a.second;
    int b_score = b.first;
    int b_num = b.second;

    if (a_score != b_score) {
        return a_score > b_score;
    }
    else {
        return a_num < b_num;
    }
}

int main() {
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    vector<Pair> A(N), B(N), AB(N);
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A[i] = make_pair(a, i);
    }
    for (int i = 0; i < N; i++) {
        int b;
        cin >> b;
        B[i] = make_pair(b, i);
    }
    for (int i = 0; i < N; i++) {
        AB[i] = make_pair(A[i].first + B[i].first, i);
    }
    sort(all(A), compare);
    sort(all(B), compare);
    sort(all(AB), compare);

    vector<bool> pass(N, false);
    for (int i = 0; i < X; i++)
    {
        pass[A[i].second] = true;
    }
    int cnt = 0;
    int i = 0;
    while (cnt < Y && i < N)
    {
        if (!pass[B[i].second]) {
            pass[B[i].second] = true;
            cnt++;
        }
        i++;
    }
    cnt = 0;
    i = 0;
    while (cnt < Z && i < N)
    {
        if (!pass[AB[i].second]) {
            pass[AB[i].second] = true;
            cnt++;
        }
        i++;
    }

    for (int i = 0; i < N; i++)
    {
        if (pass[i]) cout << i + 1 << endl;
    }
}