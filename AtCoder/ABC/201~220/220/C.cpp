#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    ll N, X;
    ll Asum = 0;
    ll ans = 0;
    cin >> N;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
        Asum += A[i];
    }
    cin >> X;

    ll all = X / Asum;
    ans = N * all;
    ll remain = X - (Asum * all);

    ll remainSum = 0;
    for (ll i = 0; remainSum <= remain; i++) {
        remainSum += A[i];
        ans++;
    }

    cout << ans << endl;
}