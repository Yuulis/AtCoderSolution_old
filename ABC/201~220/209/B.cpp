#include <bits/stdc++.h>
using namespace std;

using LL = long long;
#define INF 1e+9;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    int sum = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0)
            sum += A.at(i);
        else
            sum += A.at(i) - 1;
    }

    if (sum <= X)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}