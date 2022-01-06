#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    ll sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i] * B[i];
    }

    if (sum == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}