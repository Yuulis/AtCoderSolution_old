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
    int L, R;
    cin >> L >> R;

    int ans = INF;
    for (int i = L; i < R; i++) {
        for (int j = L + 1; j < R + 1; j++) {
            chmin(ans, (int)(1LL * i * j % 2019));
            if (ans == 0) {
                cout << ans << endl;
                return 0;
            }
        }
    }

    cout << ans << endl;
    return 0;
}