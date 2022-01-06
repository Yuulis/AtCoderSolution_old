#include <bits/stdc++.h>
using namespace std;

using LL = long long;
#define INF 1e+9;

int main() {
    int N;
    string S;
    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        if (S.at(i) == '1') {
            if (i % 2 == 1) {
                cout << "Aoki" << endl;
                return 0;
            }
            else {
                cout << "Takahashi" << endl;
                return 0;
            }
        }
    }
}