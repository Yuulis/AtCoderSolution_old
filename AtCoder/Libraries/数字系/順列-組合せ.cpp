#include <bits/stdc++.h>
#include <atcoder/all>

#define all(x) (x).begin(), (x).end()
#define fix(x) fixed << setprecision(x)
#define rep(i,start,end) for(int i=(start);i<(int)(end);i++)
#define rrep(i,start,end) for(int i=((int)(start));i>=(end);i--)

constexpr auto PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using mint = modint1000000007;
// using mint = modint998244353;
struct Edge { int to; int cost; };
using Pair = pair<int, int>;
using Graph = vector<vector<Edge>>;

mt19937 mt{ random_device{}() };
uniform_int_distribution<int> rd(0, 3);

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
ll gcd(ll x, ll y) { if (x < y) swap(x, y); ll r; while (y > 0) { r = x % y; x = y; y = r; } return x; }
ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }
ll nCk(ll N, ll K) { if (K < 0 || N < K) return 0; ll ans = 1; for (ll i = 1; i <= K; i++) { ans *= N--; ans /= i; } return ans; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
template <class T1, class T2> inline auto mod(T1 x, T2 r) { return (x % r + r) % r; }

// ======================================== //

// 重複順列
// (max-min+1)個の整数からsize個を重複を許してえらぶ
vector<int> permutation_list;
void duplication_permutation(int depth, int size, int min, int max) {
    if (depth == size) {
        // 列挙終了
        rep(i, 0, depth) cout << permutation_list[i] << " ";
        cout << endl;
    }
    else {
        rep(i, min, max + 1) {
            permutation_list[depth] = i;
            duplication_permutation(depth + 1, size, min, max);
        }
    }
}


// 順列
// (max - min + 1)個の整数からsize個をえらぶ
void permutation(int depth, int size, int min, int max) {
    vector<bool> used;

    if (depth == size) {
        // 列挙終了
        rep(i, 0, depth) cout << permutation_list[i] << " ";
        cout << endl;
    }
    else {
        rep(i, min, max + 1) {
            if (!used[i]) {
                permutation_list[depth] = i;
                used[i] = true;
                permutation(depth + 1, size, min, max);
                used[i] = false;
            }
        }
    }
}


// 重複組合せ
// (max-min+1)個の整数からsize個を重複を許してえらぶ(組合せ)
vector<int> combination_list;
void duplication_combination(int depth, int size, int min, int max) {
    if (depth == size) {
        // 列挙終了
        rep(i, 0, depth) cout << combination_list[i] << " ";
        cout << endl;
    }
    else {
        rep(i, min, max + 1) {
            combination_list[depth] = i;
            duplication_combination(depth + 1, size, i, max);
        }
    }
}


// 組合せ
// (max - min + 1)個の整数からsize個をえらぶ(組合せ)
void combination(int depth, int size, int min, int max) {
    if (depth == size) {
        // 列挙終了
        rep(i, 0, depth) cout << combination_list[i] << " ";
        cout << endl;
    }
    else {
        rep(i, min, max + 1) {
            combination_list[depth] = i;
            combination(depth + 1, size, i + 1, max);
        }
    }
}

int main() {
    int size, min, max;
    cin >> size >> min >> max;
    cout << endl;

    permutation_list.resize(size);
    combination_list.resize(size);
    duplication_permutation(0, size, min, max);
    duplication_combination(0, size, min, max);
    permutation(0, size, min, max);
    combination(0, size, min, max);
}