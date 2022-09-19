#include <bits/stdc++.h>
using namespace std;

#define rep(i,start,end) for(int i=(start);i<(int)(end);i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    rep(i, 0, N) cin >> A[i];
    vector<vector<int>> B(N, vector<int>(M));
    rep(i, 0, N) rep(j, 0, M) cin >> B[i][j];

    // ===== 一次元累積和 ===== //
    vector<int> cs(N + 1, 0);
    rep(i, 0, N) cs[i + 1] = cs[i] + A[i];

    // [3, 8)の総和
    cout << cs[8] - cs[3] << endl;

    
    // ===== 二次元累積和 ===== //
    vector<vector<int>> cs2(N + 1, vector<int>(M + 1, 0));
    rep(i, 0, N) rep(j, 0, M) cs2[i + 1][j + 1] = cs2[i + 1][j] + cs2[i][j + 1] - cs2[i][j] + B[i][j];

    // [2, 5) * [4, 7)の総和
    cout << cs2[8][7] - cs2[2][7] - cs2[5][4] + cs2[2][4] << endl;
}