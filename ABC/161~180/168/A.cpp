#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;
// template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1;
// } return 0; } template<class T>bool chmin(T &a, const T &b) { if (b < a) { a
// = b; return 1; } return 0; }

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N;
    cin >> N;

    if (N % 10 == 0) cout << "pon" << endl;
    else if (N % 10 == 1)
        cout << "pon" << endl;
    else if (N % 10 == 2)
        cout << "hon" << endl;
    else if (N % 10 == 3)
        cout << "bon" << endl;
    else if (N % 10 == 4)
        cout << "hon" << endl;
    else if (N % 10 == 5)
        cout << "hon" << endl;
    else if (N % 10 == 6)
        cout << "pon" << endl;
    else if (N % 10 == 7)
        cout << "hon" << endl;
    else if (N % 10 == 8)
        cout << "pon" << endl;
    else if (N % 10 == 9)
        cout << "hon" << endl;
}