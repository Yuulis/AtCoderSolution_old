#include <bits/stdc++.h>
using namespace std;

// ======================================== //

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int ans = 0;
    for (int bit = 0; bit < (1 << N); bit++)
    {
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            if (bit & (1 << i)) {
                sum += A[i];
            }
        }

        if (sum == M) ans++;
    }

    cout << ans << endl;
}