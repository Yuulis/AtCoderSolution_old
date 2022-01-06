#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int x, y;
    cin >> x >> y;

    if (x == y)
        cout << x << endl;
    else
        cout << 3 - (x + y) << endl;
}