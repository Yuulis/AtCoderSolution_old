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
    int N;
    cin >> N;
    vector<string> s(N);
    for (int i = 0; i < N; i++) cin >> s[i];

    map<string, ll> cnt;
    for (int i = 0; i < N; i++) {
        sort(all(s[i]));
        cnt[s[i]]++;
    }

    ll ans = 0;
    for (auto &p : cnt) {
        ans += p.second * (p.second - 1) / 2;
    }

    cout << ans << endl;
}