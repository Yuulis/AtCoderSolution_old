#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;
    vector<string> S(H);
    for (int i = 0; i < H; i++) cin >> S[i];

    int cnt = 0;

    X--;
    Y--;
    for (int i = X - 1; i >= 0; i--) {
        if (S[i][Y] == '#') break;
        cnt++;
    }
    for (int i = X + 1; i < H; i++) {
        if (S[i][Y] == '#') break;
        cnt++;
    }
    for (int i = Y - 1; i >= 0; i--) {
        if (S[X][i] == '#') break;
        cnt++;
    }
    for (int i = Y + 1; i < W; i++) {
        if (S[X][i] == '#') break;
        cnt++;
    }

    cout << cnt + 1 << endl;
}