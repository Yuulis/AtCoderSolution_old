#include <bits/stdc++.h>
using namespace std;

using LL = long long;
#define INF 1e+9;

int main() {
    int A, B;
    cin >> A >> B;

    if (A == B)
        cout << 1 << endl;
    else if (A > B)
        cout << 0 << endl;
    else if (A < B)
        cout << B - A + 1 << endl;
}