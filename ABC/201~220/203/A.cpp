#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b)
        cout << c << endl;
    else if (b == c)
        cout << a << endl;
    else if (c == a)
        cout << b << endl;
    else
        cout << 0 << endl;
}