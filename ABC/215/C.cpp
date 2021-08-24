#include <bits/stdc++.h>
using namespace std;

using LL = long long;
#define INF 1e+9;

int main() {
    string S;
    int K;
    cin >> S >> K;

    sort(S.begin(), S.end());
    while (K > 1) {
        next_permutation(S.begin(), S.end());
        K--;
    }
    cout << S << endl;
}