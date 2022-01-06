#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N, M, T;
    cin >> N >> M >> T;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) cin >> A[i] >> B[i];

    int time = 0;
    int remain = N;
    for (int i = 0; i < M; i++) {
        remain -= A[i] - time;
        if (remain < 1) {
            cout << "No" << endl;
            return 0;
        }

        remain += B[i] - A[i];
        if (remain > N) remain = N;

        time = B[i];
    }
    remain -= T - time;
    if (remain < 1) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
}