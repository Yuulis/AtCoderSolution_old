#include <bits/stdc++.h>
#include <map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9
#define INFL 1LL << 60
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;

template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

ll gcd(ll x, ll y) {
    if (x < y) swap(x, y);
    ll r;
    while (y > 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }

ll RoundUpDivision(ll a, ll b) {
    ll ans = (a + b - 1) / b;
    return ans;
}

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    int ans = lcm(a, b) * RoundUpDivision(n, lcm(a, b));

    cout << ans << endl;
}