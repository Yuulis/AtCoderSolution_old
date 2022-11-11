#include <bits/stdc++.h>

#define rep(i,start,end) for(int i=(start);i<(int)(end);i++)

using namespace std;

typedef long long ll;

ll factorialMethod(ll N) {
    ll res = 1;
    rep(i, 1, N + 1) res *= i;

    return res;
}