#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true;

    for (auto next_v : G[v]) {
        if (seen[next_v]) continue;
        dfs(G, next_v);
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    Graph G(N);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;

        G[a - 1].push_back(b - 1);
    }

    int ans = 0;
    seen.assign(N, false);  // 全頂点を「未訪問」に初期化
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) seen[j] = false;

        dfs(G, i);

        for (int j = 0; j < N; j++) {
            if (seen[j]) ans++;
        }
    }

    cout << ans << endl;
}