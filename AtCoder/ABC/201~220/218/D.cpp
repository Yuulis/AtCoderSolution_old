#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> V(N);
    for (int i = 0; i < N; i++) {
        cin >> V[i].first >> V[i].second;
    }

    sort(V.begin(), V.end());

    int ans = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // 左下と右上
            if (V[i].first < V[j].first && V[i].second < V[j].second) {
                // 左上と右下
                if (binary_search(V.begin(), V.end(), make_pair(V[i].first, V[j].second)) && binary_search(V.begin(), V.end(), make_pair(V[j].first, V[i].second))) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}