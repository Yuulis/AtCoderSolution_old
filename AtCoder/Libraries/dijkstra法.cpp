#include <bits/stdc++.h>

#define rep(i,start,end) for(int i=(start);i<(int)(end);i++)

constexpr auto INF = 1e+9;

using namespace std;
using ll = long long;
using Pair = pair<int, int>;
using Graph = vector<vector<Edge>>;

struct Edge { int to; int cost; };

// dijkstra法
vector<int> dijkstra(Graph graph, int n, int start, int INF, vector<int>& prev) {
    priority_queue<Pair, vector<Pair>, greater<Pair>> que;
    vector<int> dist(n, INF);
    dist[start] = 0;
    que.push(make_pair(0, start));
    while (que.size()) {
        int d = que.top().first;
        int u = que.top().second;
        que.pop();
        if (dist[u] < d) continue;
        rep(i, 0, graph[u].size()) {
            int v = graph[u][i].to;
            int cost = graph[u][i].cost;
            if (dist[v] > d + cost) {
                dist[v] = d + cost;
                que.push(make_pair(dist[v], v));
                prev[v] = u;
            }
        }
    }
    return dist;
}

// 経路復元
vector<int> get_path(vector<int> prev, int start, int goal) {
    vector<int> path;
    for (int t = goal; t != -1; t = prev[t]) path.push_back(t);
    reverse(path.begin(), path.end());
    return path;
}