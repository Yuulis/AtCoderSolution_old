#include <bits/stdc++.h>

#define rep(i,start,end) for(ll i=(start);i<(ll)(end);i++)
#define rrep(i,start,end) for(ll i=((ll)(start));i>=(end);i--)

using namespace std;
using ll = long long;
using Pair_int = pair<int, int>;
using Grid = vector<string>;

template <class T> using Graph = vector<vector<T>>;

// ======================================== //

// 最短経路探索
int main() {
    int N, M;
    cin >> N >> M;
    Graph<int> G(N);
    rep(i, 0, M) {
        int A, B;
        cin >> A >> B;
        A--; B--;
        G[A].push_back(B);
        G[B].push_back(A);
    }

    vector<int> dist(N, -1);
    queue<int> que;
    dist[0] = 0;
    que.push(0);
    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        for (auto& nv : G[v])
        {
            if (dist[nv] == -1) {
                dist[nv] = dist[v] + 1;
                que.push(nv);
            }
        }
    }

    rep(i, 0, N) cout << dist[i] << endl;
}

const vector<int> dy = { 1, 0, -1, 0 };
const vector<int> dx = { 0, 1, 0, -1 };

// グリッド上の最短経路探索
int main2() {
    int H, W;
    cin >> H >> W;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    sy--; sx--; gy--; gx--;
    Grid G(H);
    rep(i, 0, H) cin >> G[i];

    vector<vector<int>> dist(H, vector<int>(W, -1));
    queue<Pair_int> que;
    dist[sy][sx] = 0;
    que.push(make_pair(sy, sx));
    while (!que.empty())
    {
        auto& p = que.front();
        que.pop();
        int y = p.first;
        int x = p.second;
        rep(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
            if (G[ny][nx] == '#') continue;
            if (dist[ny][nx] != -1) continue;

            dist[ny][nx] = dist[y][x] + 1;
            que.push(make_pair(ny, nx));
        }
    }

    cout << dist[gy][gx] << endl;
}