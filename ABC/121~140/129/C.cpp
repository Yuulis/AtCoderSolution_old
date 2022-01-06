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
    int N, M;
    cin >> N >> M;

    vector<bool> broken(N + 1, false);
    for (int i = 0; i < M; i++) {
        int a;
        cin >> a;

        broken[a] = true;
    }

    vector<int> dp(N + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j <= min(N, i + 2); j++) {
            if (!broken[j]) dp[j] += dp[i];
            dp[j] %= MOD;
        }
    }

    cout << dp[N] << endl;
}