#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int factorialMethod(ll N) {
    int ans = 1;
    for (ll i = 1; i <= N; i++) {
        ans *= i;
    }
    return ans;
}