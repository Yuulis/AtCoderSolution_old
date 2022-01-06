#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A + C > B) {
        cout << "Takahashi" << endl;
    }

    else {
        cout << "Aoki" << endl;
    }
}