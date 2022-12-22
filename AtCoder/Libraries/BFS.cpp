#include <bits/stdc++.h>

#define rep(i,start,end) for(ll i=(start);i<(ll)(end);i++)
#define rrep(i,start,end) for(ll i=((ll)(start));i>=(end);i--)

using namespace std;
using ll = long long;

using Graph = vector<vector<int>>;

// ======================================== //

int main() {
    int N, M;
    cin >> N >> M;
    Graph G(N);
    rep(i, 0, M) {
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        G[A].push_back(B);
        G[B].push_back(A);
    }

    // 最短経路探索
    vector<int> dist(N, -1);
    queue<int> que;
    que.push(0);
    dist[0] = 0;
    while (!que.empty())
    {
        int p = que.front();
        que.pop();
        for (auto& np : G[p])
        {
            if (dist[np] == -1) {
                dist[np] = dist[p] + 1;
                que.push(np);
            }
        }
    }

    rep(i, 0, N) cout << dist[i] << endl;
}