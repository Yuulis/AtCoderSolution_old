#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    ll A, B, C;
    cin >> A >> B >> C;

    if (C % 2 == 0) {
        A *= A;
        B *= B;
    }

    if (A < B)
        cout << "<" << endl;
    else if (A == B)
        cout << "=" << endl;
    else if (A > B) {
        cout << ">" << endl;
    }
}