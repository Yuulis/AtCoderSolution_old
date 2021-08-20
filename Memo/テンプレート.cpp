#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    vector<pair<int, int>> B(N);
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        B.at(i).first = a;
        B.at(i).second = b;
    }
}