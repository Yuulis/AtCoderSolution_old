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
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<int> left(N), right(N);
    left = A;
    right = A;

    for (int i = 1; i < N; i++) {
        chmax(left[i], left[i - 1]);
    }
    for (int i = N - 2; i >= 0; i--) {
        chmax(right[i], right[i + 1]);
    }

    for (int i = 0; i < N; i++) {
        int ans = -1;
        if (0 < i)
            chmax(ans, left[i - 1]);
        if (i + 1 < N)
            chmax(ans, right[i + 1]);

        cout << ans << endl;
    }
}