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
    int k;
    vector<int> v(5);
    for (int i = 0; i < 5; i++) cin >> v[i];
    cin >> k;

    bool flag = true;
    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 5; j++) {
            if (v[j] - v[i] > k) { 
                flag = false;
                break;
            }
        }
    }

    if (flag) cout << "Yay!" << endl;
    else cout << ":(" << endl;
}