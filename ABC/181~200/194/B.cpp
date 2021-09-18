#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A.at(i) >> B.at(i);

    int ans = INF;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j)
                ans = min(ans, (A[i] + B[j]));
            else
                ans = min(ans, max(A[i], B[j]));
        }
    }

    cout << ans << endl;
}