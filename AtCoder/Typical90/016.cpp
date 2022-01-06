#include <bits/stdc++.h>
using namespace std;

using LL = long long;
#define INF 1e+9;

int main() {
    LL N, A, B, C;
    cin >> N >> A >> B >> C;
    LL ans = 10000;
    for (int i = 0; i <= 9999; i++) {
        for (LL j = 0; i+j <= 9999; j++) {
            LL p = N - (i * A + j * B);
            if (p < 0 || p % C != 0) continue;

            ans = min(ans, i + j + p / C);
        }
    }

    cout << ans << endl;
}