#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int X;
    cin >> X;

    if (X < 40)
        cout << 40 - X << endl;
    else if (X < 70)
        cout << 70 - X << endl;
    else if (X < 90)
        cout << 90 - X << endl;
    else
        cout << "expert" << endl;
}