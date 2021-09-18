#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    int i = 0;
    while (sum < N) {
        i++;
        sum += i;
    }

    cout << i << endl;
}