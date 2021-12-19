#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool is_pow2(ll x) {
    if (x == 0) {
        return false;
    }
    return (x & (x - 1)) == 0;
}