#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    vector<bool> flag(4, false);
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;

        if (s == "ABC")
            flag[0] = true;
        else if (s == "ARC")
            flag[1] = true;
        else if (s == "AGC")
            flag[2] = true;
        else if (s == "AHC")
            flag[3] = true;
    }

    if (!flag[0]) cout << "ABC" << endl;
    else if (!flag[1]) cout << "ARC" << endl;
    else if (!flag[2]) cout << "AGC" << endl;
    else if (!flag[3]) cout << "AHC" << endl;
}