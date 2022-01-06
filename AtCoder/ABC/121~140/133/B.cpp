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

bool isSquare(ll n) {
    ll d = (ll)sqrt(n) - 1;
    while (d * d < n) ++d;
    return d * d == n;
}

// ======================================== //

int main() {
    int N, D;
    cin >> N >> D;
    vector<vector<int>> X(N, vector<int>(D));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < D; j++) {
            cin >> X[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int d = 0;
            for (int k = 0; k < D; k++) {
                d += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
            }

            if (isSquare(d)) ans++;
        }
    }

    cout << ans << endl;
}