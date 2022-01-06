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
    vector<int> D(N * 2);
    for (int i = 0; i < N * 2; i++) cin >> D[i];

    for (int i = 4; i < N * 2; i += 2) {
        if (D[i - 4] == D[i - 3] && D[i - 2] == D[i - 1] && D[i] == D[i + 1]) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}