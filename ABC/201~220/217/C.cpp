#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; i++) cin >> P.at(i);

    vector<int> Q(N);
    for (int i = 0; i < N; i++) {
        Q[P[i] - 1] = i + 1;
    }

    for (int i = 0; i < N; i++) {
        if (i < N - 1)
            cout << Q[i] << ' ';
        else
            cout << Q[i];
    }
    cout << endl;
}