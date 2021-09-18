#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    ll N, K;
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        if (N % 200 == 0)
            N /= 200;
        else
            N = N * 1000 + 200;
    }

    cout << N << endl;
}