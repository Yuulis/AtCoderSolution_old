#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    vector<int> P(26);
    for (int i = 0; i < 26; i++) cin >> P.at(i);

    char A[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    string ans = "";
    for (int i = 0; i < 26; i++) {
        ans += A[P[i] - 1];
    }

    cout << ans << endl;
}