#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int V, T, S, D;
    cin >> V >> T >> S >> D;

    if (D >= V * T && D <= V * S)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}