#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    // M行N列の2次元配列
    vector<vector<int>> data(M, vector<int>(N));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> data.at(i).at(j);
        }
    }
}