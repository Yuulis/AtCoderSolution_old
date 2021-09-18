#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string N;
    cin >> N;

    for (int i = 0; i < 10; i++) {
        string tempN = N;
        reverse(tempN.begin(), tempN.end());

        if (N == tempN) {
            cout << "Yes" << endl;
            return 0;
        } else
            N = '0' + N;
    }

    cout << "No" << endl;
}