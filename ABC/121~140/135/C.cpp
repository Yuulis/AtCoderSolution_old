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
    vector<int> A(N + 1), B(N);
    for (int i = 0; i < N + 1; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    ll ans = 0;
    for (int i = 0; i < N; i++)
    {
        ll left = min(A[i], B[i]);
        ans += left;

        A[i] -= left;
        B[i] -= left;

        ll right = min(A[i+1], B[i]);
        ans += right;

        A[i + 1] -= right;
        B[i] -= right;
    }

    cout << ans << endl;
}