#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

bool is_pow2(int x) {
    if (x == 0) {
        return false;
    }
    return (x & (x - 1)) == 0;
}

int main() {
    ll N;
    cin >> N;

    string ans;
    for (int i = 0; !is_pow2(N); i++) {
        ans += 'A';
        N--;
    }
    for (int i = 0; i < log2(N); i++) {
        ans += 'B';
    }
    ans += 'A';

    string S;
    reverse(ans.begin(), ans.end());
    S = ans;

    cout << S << endl;
}