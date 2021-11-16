#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2)
        return false;
    else {
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) return false;
        }
    }
    return true;
}