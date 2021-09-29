#include <bits/stdc++.h>
using namespace std;

#define INF 1e+9;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> A(H * W);
    for (int i = 0; i < H * W; i++) cin >> A.at(i);

    vector<bool> line(H);
    vector<bool> row(W);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (A[i][j] == '#') {
                line.at(i) = true;
                row.at(j) = true;
            }
        }
    }

    for (int i = 0; i < H; i++) {
        if (line.at(i)) {
            for (int j = 0; j < W; j++) {
                if (row.at(j)) cout << A[i][j];
            }
        }
        cout << endl;
    }
}