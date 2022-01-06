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
    cin >> K >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int ans = A[N - 1] - A[0];
    for (int i = 1; i < N; i++) {
        int i_start = K - A[i];
        int start_i1 = A[i - 1];
        chmin(ans, i_start + start_i1);
    }

    cout << ans << endl;
}