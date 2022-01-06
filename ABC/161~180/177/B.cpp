#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string S, T;
    cin >> S >> T;

    int ans = T.size();
    for (int i = 0; i <= S.size() - T.size(); i++) {
        int change = 0;
        for (int j = 0; j < T.size(); j++) {
            if (T[j] != S[i + j]) {
                change++;
            }
        }

        ans = min(ans, change);
    }
    cout << ans << endl;
}