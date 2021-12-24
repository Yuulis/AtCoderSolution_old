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

using Node = pair<int, int>;
const int dx[] = {1, 0};
const int dy[] = {0, -1};

// ======================================== //

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    for (int i = 0; i < H; i++) {
        cin >> C[i];
    }

    vector<vector<int>> dist(W, vector<int>(H, -1));
    queue<Node> que;
    dist[0][0] = 0;
    que.push(Node(0, 0));

    while (!que.empty()) {
        Node p = que.front();
        que.pop();

        int x = p.first, y = p.second;
        for (int i = 0; i < 2; i++) {
            int x2 = x + dx[i];
            int y2 = y + dy[i];

            if (x2 < 0 || x2 >= H || y2 < 0 || y2 >= W || C[x2][y2] == '#') {
                continue;
            }

            if (dist[x2][y2] != -1) {
                continue;
            }

            dist[x2][y2] = dist[x][y] + 1;
            que.push(Node(x2, y2));
        }
    }

    cout << dist[0][0] << endl;
}