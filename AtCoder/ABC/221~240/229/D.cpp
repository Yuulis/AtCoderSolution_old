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
    ll K;
    string S;
    cin >> S >> K;

    ll N = S.size();
    
    vector<ll> cnt(N + 1);
    for (ll i = 0; i <= N - 1; i++) {
        if (S[i] == '.')
            cnt[i + 1] = cnt[i] + 1;
        else
            cnt[i + 1] = cnt[i];
    }

    ll ans = 0, r = 0;
    for (ll l = 0; l <= N - 1; l++) {
        while (r < N && cnt[r + 1] - cnt[l] <= K) {
            r++;
        }
        ans = max(ans, r-l);
    }

    cout << ans << endl;
}