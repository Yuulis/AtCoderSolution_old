#include <bits/stdc++.h>
#define rep(i,start,end) for(int i=(start);i<(int)(end);i++)

using namespace std;
using ll = long long;

// ======================================== //

int main() {
    int n, Q;
    cin >> n >> Q;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    rep(i, 0, Q) {
        ll x;
        cin >> x;

        ll ans = 0;
        rep(left, 0, n) {
            ll sum = 0;

            int right = 0;
            while (right < n && sum + a[right] <= x) {
                sum += a[right];
                right++;
            }

            ans += (right - left);

            if (right == left) ++right;
            else sum -= a[left];
        }
    }
}

// cf : https://qiita.com/drken/items/ecd1a472d3a0e7db8dce