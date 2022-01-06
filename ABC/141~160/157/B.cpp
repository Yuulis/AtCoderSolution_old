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
    int N, A[3][3], B[10];
    bool flag[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    cin >> N;
    for (int i = 0; i < N; i++) cin >> B[i];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            flag[i][j] = false;
            for (int k = 0; k < N; k++) {
                if (A[i][j] == B[k]) flag[i][j] = true;
            }
        }
    }

    string ans = "No";
    for (int i = 0; i < 3; i++) {
        if (flag[0][i] && flag[1][i] && flag[2][i]) ans = "Yes";
    }
    for (int i = 0; i < 3; i++) {
        if (flag[i][0] && flag[i][1] && flag[i][2]) ans = "Yes";
    }
    if (flag[0][0] && flag[1][1] && flag[2][2]) ans = "Yes";
    if (flag[2][0] && flag[1][1] && flag[0][2]) ans = "Yes";

    cout << ans << endl;
    return 0;
}