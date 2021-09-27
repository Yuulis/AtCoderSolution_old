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

    vector<ll> s(N + 1, 0);
    for (int i = 0; i < N; ++i) s[i + 1] = s[i] + A[i];

    ll ans = 0;
    for (int i = 0; i < N; i++)
    {
        ll sum = (s[N] - s[i + 1]) % MOD;
        ans += A[i] * sum;
        ans %= MOD;
    }

    cout << ans << endl;
}