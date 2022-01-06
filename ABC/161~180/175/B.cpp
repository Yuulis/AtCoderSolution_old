#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> L(N);
    for (int i = 0; i < N; i++) cin >> L[i];

    sort(L.begin(), L.end());

    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                if (L[i] != L[j] && L[j] != L[k] && L[k] + L[j] > L[i]) ans++;
            }
        }
    }

    cout << ans << endl;
}