#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

template <class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;
constexpr double PI = 3.14159265358979;

int main() {
    int A, B, H, M;
    cin >> A >> B >> H >> M;

    double angle_h = 0.5 * ((H * 60) + M) * PI / 180;
    double angle_m = 6 * M * PI / 180;

    double angle = angle_h - angle_m;

    double dis = sqrt(A * A + B * B - 2 * A * B * cos(angle));

    cout << fixed << setprecision(10) << dis << endl;
}