#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

string to_oct(int n) {
    string s;
    while (n) {
        s = to_string(n % 8) + s;
        n /= 8;
    }
    return s;
}

bool s_search(string s, char searching) {
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == searching) {
            return true;
        }
    }
    return false;
}

int main() {
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        string s = to_string(i);

        if (s_search(s, '7')) cnt++;
        else {
            s = to_oct(i);
            if (s_search(s, '7')) cnt++;
        }
    }

    cout << N - cnt << endl;
}