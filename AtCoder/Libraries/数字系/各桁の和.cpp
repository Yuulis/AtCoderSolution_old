#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int GetSumOfDigits(ll N) {
    ll sum = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }
    return sum;
}