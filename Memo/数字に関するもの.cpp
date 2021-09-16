#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Nを0埋め (4桁)
    cout << setfill('0') << right << setw(4) << N << endl;  // 右寄せ
    cout << setfill('0') << left << setw(4) << N << endl;  // 左寄せ

    // 配列を連番の数字で初期化
    vector<int> A(N);
    iota(A.begin(), A.end(), 0);  // 0, 1, 2, ... , N - 1
}