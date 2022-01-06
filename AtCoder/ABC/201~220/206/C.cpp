#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    ll N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    sort(A.begin(), A.end());
    A.push_back(-1);

    ll ans = N * (N - 1) / 2;
    ll cnt = 1;
    for (int i = 0; i < N; i++) {  
        if (A.at(i) != A.at(i + 1)) {
            ans -= cnt * (cnt - 1) / 2;
            cnt = 1;
        } else
            cnt++;
    }

    cout << ans << endl;
}