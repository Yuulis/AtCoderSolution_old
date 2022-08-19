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

int dx[] = {-1, 0, 1};
int dy[] = {-1, 0, 1};

// ======================================== //

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> v(H);
    for (int i = 0; i < H; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (v[i][j] == '#') continue;

            int ans = 0;
            for (int h = 0; h < 3; h++) {
                for (int w = 0; w < 3; w++) {
                    if (h == 1 && w == 1) continue;

                    int yy = i + dy[h];
                    int xx = j + dx[w];
                    if (0 <= yy && yy < H && 0 <= xx && xx < W) {
                        if (v[yy][xx] == '#') ans++;
                    }
                }
            }

            v[i][j] = char(ans + '0');
        }
    }

    for (int i = 0; i < H; i++) {
        cout << v[i] << endl;
    }
}