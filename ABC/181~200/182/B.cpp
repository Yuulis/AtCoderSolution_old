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
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int ans = -1;
    int M = 0;
    for (int i = 2; i <= 1000; i++) {
        int cnt = 0;
        for (int j = 0; j < N; j++) {
            if (A[j] % i == 0) cnt++;
        }

        if (M < cnt) {
            ans = i;
            M = cnt;
        }
    }

    cout << ans << endl;
}