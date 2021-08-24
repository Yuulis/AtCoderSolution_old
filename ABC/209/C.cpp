#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> C(N);
    for (int i = 0; i < N; i++) cin >> C.at(i);

    sort(C.begin(), C.end());
    ll ans = 1;
    for (int i = 0; i < N; i++) {
        ans = (ans * (C.at(i) - i)) % MOD;

        if (ans <= 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    cout << ans << endl;
}