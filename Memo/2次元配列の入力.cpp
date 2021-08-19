#include <bits/stdc++.h>
using namespace std;

// M行N列の2次元配列
int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<int>> data(M, vector<int>(N));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> data.at(i).at(j);
        }
    }
}