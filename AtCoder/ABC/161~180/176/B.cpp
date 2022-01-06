#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string N;
    cin >> N;

    int sum = 0;
    for (int i = 0; i < N.size(); i++) {
        int a = N[i] - '0';
        sum += a;
    }

    if (sum % 9 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}