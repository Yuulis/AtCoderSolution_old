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

// 10進数を16進数に変換(長さ指定可)
string itoh(int x, int size = 0) {
    char hex_buf[16];
    sprintf(hex_buf, "%X", x);
    string hex_str = hex_buf;
    if (size == 0) {
        return hex_str;
    }

    string front;
    if (x >= 0) front = "0";
    else front = "F";

    int diff = size - hex_str.length();
    for (int i = 0; i < diff; i++) {
        hex_str = front + hex_str;
    }

    if (diff < 0) {
        hex_str.erase(0, -diff);
    }
    return hex_str;
}