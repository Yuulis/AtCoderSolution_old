#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << max(a * c, max(a * d, max(b * c, b * d))) << endl;
}