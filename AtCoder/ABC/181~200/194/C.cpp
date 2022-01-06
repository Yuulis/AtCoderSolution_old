#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    vector<int> num(410);
    for (int i = 0; i < N; i++) {
        num[A[i] + 200]++;
    }

    ll ans = 0;
    for (int i = 0; i < 401; i++) {
        for (int j = i + 1; j < 401; j++) {
            ans += (ll)num[i] * num[j] * (i - j) * (i - j);
        }
    }

    cout << ans << endl;
}