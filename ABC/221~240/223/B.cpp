#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

template <class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;
constexpr double PI = 3.14159265358979;

// ======================================== //

int main() {
    string S;
    cin >> S;

    int l = S.size();

    vector<string> ans(l);
    for (int i = 0; i < l; i++) {
        ans[i] = S;
        S = S.substr(1) + S[0];
    }
    sort(ans.begin(), ans.end());

    cout << ans[0] << endl;
    cout << ans[l - 1] << endl;
}