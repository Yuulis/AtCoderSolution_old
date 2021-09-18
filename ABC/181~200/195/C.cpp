#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    ll N;
    cin >> N;

    ll ans = 0;
    if (N >= 1000) ans += N - 999;
    if (N >= 1000000) ans += N - 999999;
    if (N >= 1000000000) ans += N - 999999999;
    if (N >= 1000000000000) ans += N - 999999999999;
    if (N >= 1000000000000000) ans += N - 999999999999999;

    cout << ans << endl;
}