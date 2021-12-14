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
    vector<int> T(N);
    vector<vector<int>> A(N);
    for (int i = 0; i < N; i++) {
        int K;
        cin >> T[i] >> K;

        A[i] = vector<int>(K);
        for (int j = 0; j < K; j++) {
            cin >> A[i][j];
            A[i][j]--;
        }
    }

    vector<bool> need(N);
    need[N - 1] = true;
    for (int i = N - 1; i >= 0; i--) {
        if (need[i]) {
            for (int j : A[i]) {
                need[j] = true;
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i < N; i++) {
        if (need[i]) ans += T[i];
    }

    cout << ans << endl;
}