#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    double a;
    cin >> a;

    int x, y;
    x = (a * 10) / 10;
    y = (a - x) * 10;

    if (y <= 2)
        cout << to_string(x) + '-' << endl;
    else if (y <= 6)
        cout << to_string(x) << endl;
    else if (y <= 9)
        cout << to_string(x) + '+' << endl;
}