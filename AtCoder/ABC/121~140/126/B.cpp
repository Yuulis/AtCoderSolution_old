#include <bits/stdc++.h>
#include <map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9
#define INFL 1LL << 60
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;

template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    string S;
    cin >> S;

    int a = int(S[0] - '0') * 10 + int(S[1] - '0');
    int b = int(S[2] - '0') * 10 + int(S[3] - '0');

    if (1 <= b && b <= 12) 
    {
        if (1 <= a && a <= 12) {
            cout << "AMBIGUOUS" << endl;
        }
        else {
            cout << "YYMM" << endl;
        }
    }
    else
    {
        if (1 <= a && a <= 12) {
            cout << "MMYY" << endl;
        }
        else {
            cout << "NA" << endl;
        }
    }
}