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
    string S, T;
    cin >> S >> T;

    if (S == T) {
        cout << "Yes" << endl;
        return 0;
    }

    for (int i = 0; i < S.size() - 1; i++)
    {
        string change = S.substr(0, i) + S[i + 1] + S[i] + S.substr(i+2);
        if (change == T) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}