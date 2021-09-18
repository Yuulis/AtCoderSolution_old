#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;

    if (N % 100 == 0)
        cout << N / 100 << endl;
    else
        cout << N / 100 + 1 << endl;
}