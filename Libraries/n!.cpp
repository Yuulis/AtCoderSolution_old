#include <bits/stdc++.h>
using namespace std;

int factorialMethod(int N) {
    int ans = 1;
    for (int i = 1; i <= N; i++) {
        ans *= i;
    }
    return ans;
}