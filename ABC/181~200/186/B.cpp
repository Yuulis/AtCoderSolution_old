#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int H, W;
    cin >> H >> W;

    int m = INF;
    vector<vector<int>> A(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
            m = min(m, A[i][j]);
        }
    }

    int cnt = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cnt += A[i][j] - m;
        }
    }

    cout << cnt << endl;
}