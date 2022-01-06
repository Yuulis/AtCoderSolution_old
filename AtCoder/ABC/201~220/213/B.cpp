#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> A(N);
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A.at(i).first = a;
        A.at(i).second = i + 1;
    }

    sort(A.begin(), A.end());

    cout << A.at(N - 2).second << endl;
}