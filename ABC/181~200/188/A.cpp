#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (min(X, Y) + 3 > max(X, Y))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}