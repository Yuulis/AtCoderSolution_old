#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string S;
    cin >> S;

    reverse(S.begin(), S.end());
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '6')
            S[i] = '9';
        else if (S[i] == '9')
            S[i] = '6';
    }

    cout << S << endl;
}