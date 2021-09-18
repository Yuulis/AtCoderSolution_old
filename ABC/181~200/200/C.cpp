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

    vector<ll> remain(200);
    for (int i = 0; i < N; i++) {
        remain[A[i] % 200]++;
    }

    ll cnt = 0;
    for (int i = 0; i < 200; i++) {
        cnt += (remain[i] * (remain[i] - 1)) / 2;
    }

    cout << cnt << endl;
}