#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;
constexpr auto MOD = 1000000007;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    // ‹æŠÔ‚ð”¼ŠJ‹æŠÔ‚É’¼‚·(•ïŠÜŠÖŒW‚ªl—¶‚³‚ê‚Ä‚¢‚ê‚Î2”{‚µ‚Ä‚à‰Â)
    // [l, r] -> [l, r + 0.5) -> [2l, 2r + 1)
    // [l, r) -> [l, r) -> [2l, 2r)
    // (l, r] -> [l + 0.5, r + 0.5) -> [2l + 1, 2r + 1)
    // (l, r) -> [l + 0.5, r) -> [2l + 1, 2r)
}

// cf. https://atcoder.jp/contests/abc207/tasks/abc207_c
// cf. https://algo-logic.info/sum-of-range/