#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;

    vector<int> X(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int ans = INF;
    for (int i = 0; i < 101; i++) {
        int temp = 0;

        for (int j = 0; j < N; j++) {
            temp += (X[j] - i) * (X[j] - i);
        }

        chmin(ans, temp);
    }

    cout << ans << endl;
}