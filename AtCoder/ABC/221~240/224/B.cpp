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
    int H, W;
    cin >> H >> W;
    vector<vector<ll>> A(H, vector<ll>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    bool flag = true;
    for (int i = 0; i < H; i++) {
        for (int j = i + 1; j < H; j++) {
            for (int k = 0; k < W; k++) {
                for (int l = k + 1; l < W; l++) {
                    int a = A[i][k];
                    int b = A[j][l];
                    int c = A[j][k];
                    int d = A[i][l];

                    if (a + b > c + d) flag = false;
                }
            }
        }
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}