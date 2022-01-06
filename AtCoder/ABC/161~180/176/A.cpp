#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int RoundUpDivision(int a, int b) {
    int ans = (a + b - 1) / b;
    return ans;
}

int main() {
    int N, X, T;
    cin >> N >> X >> T;

    cout << RoundUpDivision(N, X) * T << endl;
}