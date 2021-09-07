#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    ll N;
    cin >> N;

    ll cnt = 1;
    while (stoll(to_string(cnt) + to_string(cnt)) <= N) {
        cnt++;
    }

    cout << cnt - 1 << endl;
}