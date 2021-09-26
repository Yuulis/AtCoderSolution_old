#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// K進数を10進数に変換
int Kto10(ll x, ll k) {
    ll ans = 0;
    ll base = 1;
    while (x > 0) {
        ans = ans + (x % 10) * base;
        x = x / 10;
        base = base * k;
    }
    return ans;
}