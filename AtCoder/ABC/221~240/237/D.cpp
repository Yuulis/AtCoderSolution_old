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

int main() {
    int N;
    string S;
    cin >> N >> S;

    deque<int> A = {N};
    for (int i = N - 1; i >= 0; i--) {
        if (S[i] == 'L') A.push_back(i);
        if (S[i] == 'R') A.push_front(i);
    }

    for (int i = 0; i <= N; i++) {
        cout << A[i] << " " << endl;
    }
}