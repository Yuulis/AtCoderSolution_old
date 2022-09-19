#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using ll = long long;
using lld = long double;
using Graph = vector<vector<int>>;
using mint = modint998244353;

random_device rd;
default_random_engine eng(rd());
uniform_int_distribution<int> distr(0, 3);

#define all(x) (x).begin(), (x).end()

constexpr auto PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;

typedef pair<int, int> Pair;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
mint modPow(ll x, ll n) { mint ans = 1; for (ll i = 0; i < n; i++) ans *= x; return ans; }
ll gcd(ll x, ll y) { if (x < y) swap(x, y); ll r; while (y > 0) { r = x % y; x = y; y = r; } return x; }
ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    int n;
    cin >> n;
    vector<int> cards(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cards[i] = i + 1;
    }
    int m;
    cin >> m;

    vector<int> temp(2 * n);
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        if (k == 0) {
            for (int j = 0; j < 2 * n; j++)
            {
                if (j % 2 == 0) {
                    temp[j] = cards[j / 2];
                }
                else {
                    temp[j] = cards[(j - 1) / 2 + n];
                }
            }

            cards = temp;
        }
        else {
            for (int j = 0; j < 2 * n; j++)
            {
                temp[j] = cards[(j + k) % (2 * n)];
            }

            cards = temp;
        }
    }

    for (int i = 0; i < 2 * n; i++)
    {
        cout << cards[i] << endl;
    }
}