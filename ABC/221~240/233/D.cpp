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

template <class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}

// ======================================== //

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<ll> sum(N + 1, 0);
    for (int i = 0; i < N; ++i) sum[i + 1] = sum[i] + A[i];

    map<ll, ll> mp;
    ll ans = 0;
    for (ll i = 1; i < N+1; i++) {
        mp[sum[i - 1]]++;
        ans += mp[sum[i] - K];
    }

    cout << ans << endl;
}