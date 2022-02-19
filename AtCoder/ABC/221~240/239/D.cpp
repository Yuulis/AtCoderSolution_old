#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <atcoder/modint.hpp>

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

bool isPrime(ll x) {
    if (x < 2)
        return false;
    else {
        for (ll i = 2; i * i <= x; i++) {
            if (x % i == 0) return false;
        }
    }
    return true;
}

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    vector<bool> prime(210, true);
    for (int i = 1; i < prime.size(); i++) {
        if (!isPrime(i)) prime[i] = false;
    }

    int win = 0;  // ‚‹´win
    for (int i = A; i <= B; i++) {
        for (int j = C; j <= D; j++) {
            if (prime[i + j]) { 
                win++;
                break;
            }
        }
    }

    if (win == B - A + 1) cout << "Aoki" << endl;
    else cout << "Takahashi" << endl;
}