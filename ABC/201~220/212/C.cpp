#include <bits/stdc++.h>
using namespace std;

#define INF 1e+9;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    for (int i = 0; i < M; i++) cin >> B.at(i);

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int ans = INF;
    int i = 0;
    int j = 0;
    while (i < N && j < M) {
        ans = min(ans, abs(A.at(i) - B.at(j)));

        if (A.at(i) > B.at(j))
            j++;
        else
            i++;
    }

    cout << ans << endl;
}