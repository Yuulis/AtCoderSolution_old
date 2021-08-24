#include <bits/stdc++.h>
using namespace std;

using LL = long long;
#define INF 1e+9;

int main() {
    int N, A, X, Y;
    cin >> N >> A >> X >> Y;

    if (N <= A) {
        cout << X * N << endl;
        return 0;
    } else {
        cout << X * A + Y * (N - A) << endl;
        return 0;
    }
}