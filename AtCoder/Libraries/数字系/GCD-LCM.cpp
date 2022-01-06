#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll x, ll y) {
    if (x < y) swap(x, y);
    ll r;
    while (y > 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

ll lcm(ll x, ll y) { return ll(x / gcd(x, y)) * y; }