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

vector<ll> Eratosthenes(ll N)
{
    vector<bool> is_prime(N + 1, true);
    vector<ll> res;
    for (ll i = 2; i <= N; i++)
    {
        if (is_prime[i])
        {
            for (ll j = 2 * i; j <= N; j += i) is_prime[j] = false;
            res.emplace_back(i);
        }
    }
    return res;
}

ll ClampToInt(ll p, ll q) {
    double estimate = 1;
    estimate = p * q * q * q;
    if (estimate > 4e18) return 4e18;
    else return p * q * q * q;
}

int main() {
    ll N;
    cin >> N;

    ll cnt = 0;
    vector<ll> primes = Eratosthenes(1000010);
    int q = primes.size() - 1;
    for (int p = 0; p < primes.size(); p++)
    {
        while (p < q && ClampToInt(primes[p], primes[q]) > N) q--;
        
        if (p >= q) break;
        cnt += q - p;
    }

    cout << cnt << endl;
}