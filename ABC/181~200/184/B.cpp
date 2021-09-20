#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N, X;
    string S;
    cin >> N >> X >> S;

    for (int i = 0; i < N; i++) {
        if (S[i] == 'o')
            X++;
        else if (S[i] == 'x' && X > 0)
            X--;
    }

    cout << X << endl;
}