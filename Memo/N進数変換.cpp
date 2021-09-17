#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

// 10 => 8
string to_oct(int n) {
string s;
    while (n) {
        s = to_string(n % 8) + s;
        n /= 8;
    }
    return s;
}