#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    ll M = 0;
    ll ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] < M) {
            ans += M - A[i];
            A[i] += M - A[i];
        }

        M = max(M, A[i]);
    }

    cout << ans << endl;
}