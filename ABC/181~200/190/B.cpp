#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N, S, D;
    cin >> N >> S >> D;
    vector<int> X(N), Y(N);
    for (int i = 0; i < N; i++) cin >> X[i] >> Y[i];

    bool flag = false;
    for (int i = 0; i < N; i++) {
        if (X[i] < S && Y[i] > D) {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}