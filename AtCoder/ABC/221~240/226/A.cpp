#include <bits/stdc++.h>

#include <map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

constexpr double PI = 3.14159265358979;

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

float round_n(float number, double n) {
    number = number * pow(10, n - 1);  //四捨五入したい値を10の(n-1)乗倍する。
    number = round(number);    //小数点以下を四捨五入する。
    number /= pow(10, n - 1);  // 10の(n-1)乗で割る。
    return number;
}

// ======================================== //

int main() {
    double X;
    cin >> X;

    cout << round(X) << endl;
}