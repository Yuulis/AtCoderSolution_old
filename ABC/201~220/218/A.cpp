#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    string S;
    cin >> N >> S;

    if (S[N - 1] == 'o')
        cout << "Yes" << endl;
    else if (S[N - 1] == 'x')
        cout << "No" << endl;
}