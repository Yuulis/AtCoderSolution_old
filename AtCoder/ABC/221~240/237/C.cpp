#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;
constexpr auto MOD = 1000000007;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

bool isPalindrome(string s) {
    int l = s.size();
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - i - 1]) return false;
    }
    return true;
}

int main() {
    string S;
    cin >> S;

    int l = S.size();
    int x = 0, y = 0;
    for (int i = 0; i < l; i++) {
        if (S[i] == 'a') x++;
        else break;
    }
    for (int i = l - 1; i >= 0; i--) {
        if (S[i] == 'a') y++;
        else break;
    }

    if (x == l) {
        cout << "Yes" << endl;
        return 0;
    }

    if (x > y) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < l - y; i++) {
        if (S[i] != S[x + (l - y) - i - 1]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}