#include <bits/stdc++.h>

#define rep(i,start,end) for(ll i=(start);i<(ll)(end);i++)
#define rrep(i,start,end) for(ll i=((ll)(start));i>=(end);i--)

using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using Graphw = vector<vector<Edge>>;

// ======================================== //

// DFS再帰
vector<bool> seen(3000);
void dfs(const Graph &G, int v) {
    seen[v] = true;

    for (auto nv : G[v]) {
        if (seen[nv]) continue;
        dfs(G, nv);
    }
}

// 重み付きグラフ用
struct Edge
{
    int to;
    int weight;
    Edge(int t, int w) : to(t), weight(w) {}
};

int main() {
    int N, M;
    cin >> N >> M;

    // 重みなし無向グラフ
    Graph G(N);
    rep(i, 0, M) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 重みあり無向グラフ
    Graphw Gw(N);
    rep(i, 0, M)
    {
        int from, to, weight;
        cin >> from >> to >> weight;
        Gw[from].push_back(Edge(to, weight));
    }

    seen.assign(N, false);
    dfs(G, 0);
}