#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isSquare(ll n) {
    ll d = (ll)sqrt(n) - 1;
    while (d * d < n) ++d;
    return d * d == n;
}