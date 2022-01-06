#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int X;
    cin >> X;

    if (X % 100 == 0)
        cout << 100 << endl;
    else
        cout << 100 - (X % 100) << endl;
}