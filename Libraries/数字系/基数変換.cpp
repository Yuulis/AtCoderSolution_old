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

// 10進数をK進数に変換
int NumtoK(ll x, ll k) {
    string s;
    while (x != 0)
    {
        s += to_string(x % k);
        x /= k;
    }
    int ans = atoi(s.c_str());
    return ans;
}