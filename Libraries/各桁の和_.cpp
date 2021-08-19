#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

int GetSumOfDigits(int N) { 
    int sum = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }
    return sum;
}