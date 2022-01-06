#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int D, T, S;
    cin >> D >> T >> S;

    if (D <= T * S)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}