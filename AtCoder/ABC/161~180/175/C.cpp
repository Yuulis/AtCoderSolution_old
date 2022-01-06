#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    ll X, K, D;
    cin >> X >> K >> D;
    X = abs(X);

    ll move = min(K, X / D);
    K -= move;
    X -= move * D;

    if (K % 2 == 0)
        cout << X << endl;
    else
        cout << D - X << endl;
}