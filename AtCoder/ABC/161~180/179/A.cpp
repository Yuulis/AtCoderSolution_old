#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string S;
    cin >> S;

    if (S[S.size() - 1] == 's')
        cout << S + "es" << endl;
    else
        cout << S + 's' << endl;
}