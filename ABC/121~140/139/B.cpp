#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = 0;
    int hole = 1;
    while (hole < B) {
        hole--;
        hole += A;
        ans++;
    }

    cout << ans << endl;
}