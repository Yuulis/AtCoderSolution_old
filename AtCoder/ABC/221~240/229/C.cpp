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
    ll N, W;
    cin >> N >> W;
    vector<pair<ll, ll>> p(N);
    for (int i = 0; i < N; i++) cin >> p[i].first >> p[i].second;

    sort(all(p));
    reverse(all(p));

    ll ans = 0, sum = 0;
    for (int i = 0; i < N; i++) {
        if (sum + p[i].second <= W) {
            sum += p[i].second;
            ans += p[i].first * p[i].second;
        }
        else {
            int add = W - sum;
            ans += p[i].first * add;
            break;
        }
    }

    cout << ans << endl;
}