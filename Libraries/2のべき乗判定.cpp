#include <bits/stdc++.h>
using namespace std;

bool is_pow2(int x) {
    if (x == 0) {
        return false;
    }
    return (x & (x - 1)) == 0;
}