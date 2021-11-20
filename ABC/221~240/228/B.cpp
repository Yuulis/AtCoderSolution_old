#include <bits/stdc++.h>

#include <map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9
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
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 1; i <= N; i++) cin >> A[i];

    vector<bool> flag(N);
    int i = X, ans = 1;
    flag[i] = true;

    while (true) {
        i = A[i];
        if (flag[i])
            break;
        else {
            flag[i] = true;
            ans++;
        }
    }

    cout << ans << endl;
}