#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];


    vector<int> s(N + 1, 0);
    for (int i = 0; i < N; ++i) s[i + 1] = s[i] + A[i];

    // [3, 8)の総和
    cout << s[8] - s[3] << endl;
}