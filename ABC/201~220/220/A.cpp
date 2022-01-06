#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    for (int i = 1; C*i <= B; i++)
    {
        if (C*i >= A) {
            cout << C*i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}