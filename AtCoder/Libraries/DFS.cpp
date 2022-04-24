#include <bits/stdc++.h>

using namespace std;
using Graph = vector<vector<int>>;
using Graphw = vector<vector<Edge>>;

// DFS再帰
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true;

    for (auto next_v : G[v]) {
        if (seen[next_v]) continue;
        dfs(G, next_v);
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
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 重みあり無向グラフ
    Graphw Gw(N);
    for (int i = 0; i < M; i++)
    {
        int from, to, weight;
        cin >> from >> to >> weight;
        Gw[from].push_back(Edge(to, weight));
    }

    seen.assign(N, false);
    dfs(G, 0);
}