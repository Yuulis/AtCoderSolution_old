#include <bits/stdc++.h>

#define rep(i,start,end) for(int i=(start);i<(int)(end);i++)

using namespace std;

// ======================================== //

int main() {
    int N, Q;
    cin >> N >> Q;

    // クエリ処理
    vector<int> v(N + 1);
    rep(i, 0, Q) {
        int L, R;
        cin >> L >> R;

        v[L]++;
        v[R + 1]--;
    }

    // 累積和計算
    vector<int> cs(N + 1, 0);
    rep(i, 0, N) cs[i + 1] = cs[i] + v[i];
}