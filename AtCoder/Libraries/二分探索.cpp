#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

// cf : https://qiita.com/ganyariya/items/33f1326154b85db465c3
// cf : https://qiita.com/drken/items/97e37dd6143e33a64c8c

vector<ll> a;

// 一般化二分探索
// index が条件を満たすかどうか
bool isOK(int index, int key) {
    if (a[index] >= key) return true;
    else return false;
}

ll binary_search(ll key) {
    ll ng = -1;
    ll ok = (int)a.size();

    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;

        if (isOK(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}


int main() {
    int N;
    a.resize(N);

    sort(all(a));  // ソート必須!
    if (binary_search(a.begin(), a.end(), 5)) {
        cout << "Found" << endl;  // 配列Aに5が入っている
    }

    // Aの要素の中で、6以上である要素の、最小のイテレータを返す
    auto itr = lower_bound(all(a), 6);

    // Aの要素の中で、6より大きい要素の、最小のイテレータを返す
    auto itr = upper_bound(all(a), 6);
}