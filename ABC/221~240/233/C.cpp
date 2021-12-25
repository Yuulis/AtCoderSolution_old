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

ll N, X;
ll ans = 0;
vector<vector<ll>> v;

void calc(ll pos, ll multiple) {
    if (pos == N) {
        if (multiple == X) {
            ans++;
        }
        return;
    }

    for (ll c : v[pos]) {
        if (multiple > X / c) continue;
        calc(pos + 1, multiple * c);
    }
}

// ======================================== //

int main() {
    cin >> N >> X;

    v.resize(N);
    for (int i = 0; i < N; i++) {
        ll L;
        cin >> L;

        v[i].resize(L);
        for (int j = 0; j < L; j++) {
            cin >> v[i][j];
        }
    }

    calc(0, 1);

    cout << ans << endl;
}