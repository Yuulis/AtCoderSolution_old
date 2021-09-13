#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string C;
    cin >> C;

    if (C[0] == C[1] && C[1] == C[2])
        cout << "Won" << endl;
    else
        cout << "Lost" << endl;
}