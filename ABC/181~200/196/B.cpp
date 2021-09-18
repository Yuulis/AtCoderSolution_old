#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string X;
    cin >> X;

    string ans = X.substr(0, X.find('.'));
    cout << ans << endl;
}