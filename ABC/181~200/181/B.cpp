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
    vector<ll> A(N), B(N);
    for (ll i = 0; i < N; i++) cin >> A[i] >> B[i];

    ll sum = 0;
    for (ll i = 0; i < N; i++) {
        sum += (A[i] + B[i]) * (B[i] - A[i] + 1) / 2;
    }

    cout << sum << endl;
}