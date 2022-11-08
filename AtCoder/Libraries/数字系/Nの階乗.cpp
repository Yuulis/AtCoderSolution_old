#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int factorialMethod(ll N) {
    int res = 1;
    for (ll i = 1; i <= N; i++) {
        res *= i;
    }
    return res;
}