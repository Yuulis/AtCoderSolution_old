#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<string> S(N), T(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i] >> T[i];
    }

    for (int i = 0; i < N; i++) {
        string s, t;
        s = S[i];
        t = T[i];

        for (int j = i + 1; j < N; j++) {
            if (s == S[j] && t == T[j]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}