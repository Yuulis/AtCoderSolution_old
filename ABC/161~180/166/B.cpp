#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

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

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;
constexpr double PI = 3.14159265358979;

// ======================================== //

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> d(K);
    vector<vector<int>> A(K, vector<int>());
    for (int i = 0; i < K; i++) {
        cin >> d[i];

        A[i].resize(d[i]);
        for (int j = 0; j < d[i]; j++) {
            cin >> A[i][j];
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        bool flag = false;
        for (auto j : A) {
            for (auto k : j) {
                if (i == k) flag = true;
            }
        }

        if (!flag) ans++;
    }

    cout << ans << endl;
}