#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        if (i % 2 == 0 && isupper(S[i])) {
            cout << "No" << endl;
            return 0;
        }
        else if (i % 2 == 1 && !isupper(S[i])) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}