#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    // 二分探索
    if (binary_search(A.begin(), A.end(), 5)) {
        cout << "Found" << endl;  // 配列Aに5が入っている
    }
}