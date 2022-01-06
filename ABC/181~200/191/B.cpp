#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    int M = 0;
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    vector<int> ans(N);
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            continue;
        }
        ans[cnt] = A[i];
        cnt++;
    }

    for (int i = 0; i < cnt; i++)
    {
        cout << ans[i] << ' ';
    }
    cout << endl;
}