#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int GetSumOfDigits(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }
    return sum;
}

int main() {
    int A, B;
    cin >> A >> B;

    if (GetSumOfDigits(A) >= GetSumOfDigits(B))
        cout << GetSumOfDigits(A) << endl;
    else
        cout << GetSumOfDigits(B) << endl;
}