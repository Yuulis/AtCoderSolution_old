#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

// cf : https://qiita.com/ganyariya/items/33f1326154b85db465c3
// cf : https://qiita.com/drken/items/97e37dd6143e33a64c8c

int main() {
    int N;
    vector<int> A(N);

    sort(all(A));  // ソート必須!
    if (binary_search(A.begin(), A.end(), 5)) {
        cout << "Found" << endl;  // 配列Aに5が入っている
    }
}