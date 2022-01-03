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
    vector<int> W(N);
    for (int i = 0; i < N; i++) cin >> W[i];

    int ans = INF;
    for (int t = 0; t < N - 1; t++) {
        int sa = 0, sb = 0;
        for (int i = 0; i < N; i++) {
            if (i <= t)
                sa += W[i];
            else
                sb += W[i];
        }

        chmin(ans, abs(sa - sb));
    }

    cout << ans << endl;
}