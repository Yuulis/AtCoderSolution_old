#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string Sa, Sb, Sc, T;
    cin >> Sa >> Sb >> Sc >> T;

    string ans;
    for (int i = 0; i < T.size(); i++) {
        if (T[i] == '1')
            ans += Sa;
        else if (T[i] == '2')
            ans += Sb;
        else if (T[i] == '3')
            ans += Sc;
    }

    cout << ans << endl;
}