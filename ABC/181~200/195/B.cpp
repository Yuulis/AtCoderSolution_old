#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int A, B, W;
    cin >> A >> B >> W;

    int m = INF;
    int M = 0;
    for (int i = 1; i <= 1000000; i++)  // 1000kg = 1000000g
    {
        if (A * i <= 1000 * W && 1000 * W <= B * i) {
            m = min(m, i);
            M = max(M, i);
        }
    }

    if (M == 0)
        cout << "UNSATISFIABLE" << endl;
    else
        cout << m << ' ' << M << endl;
}