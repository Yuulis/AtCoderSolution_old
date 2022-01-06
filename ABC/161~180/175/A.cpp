#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string S;
    cin >> S;

    int ans = 0;
    bool flag = false;
    for (int i = 0; i < S.size(); i++) {
        if (flag) {
            if (S[i] == 'R') {
                ans++;
            }
            else {
                flag = false;
            }
        }
        else {
            if (S[i] == 'R') {
                flag = true;
                ans = 1;
            }
        }
    }

    cout << ans << endl;
}