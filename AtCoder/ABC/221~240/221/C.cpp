#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;
// template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1;
// } return 0; } template<class T>bool chmin(T &a, const T &b) { if (b < a) { a
// = b; return 1; } return 0; }

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string N;
    cin >> N;

    sort(N.begin(), N.end());
    int ans = 0;

    do {
        for (int i = 1; i < N.size(); i++) {
            string a, b;
            for (int j = 0; j < i; j++) {
                a += N[j];
            }
            for (int j = i; j < N.size(); j++) {
                b += N[j];
            }

            if (a[0] == '0' || b[0] == '0') continue;
            ans = max(ans, stoi(a)*stoi(b));
        }

    } while (next_permutation(N.begin(), N.end()));

    cout << ans << endl;
}