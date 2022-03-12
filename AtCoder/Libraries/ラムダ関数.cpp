#include <bits/stdc++.h>

#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];


    auto f1 = [](int x) { return x * x; };  // xの二乗を返す
    cout << f1(5) << endl;                  // 25

    auto f2 = [N, &M](int x) {
        return N * x + M;
    };  // 外部変数N, Mを参照(Mは書換可)
    auto f3 = [=](int x) {
        return N * x + M;
    };  // 全ての外部変数を参照可能にする(読み取り専用)
    auto f4 = [&](int x) {
        return N * x + M;
    };  // 全ての外部変数を参照・書換可能にする

    // 数字の桁数を降順にソート
    sort(A.begin(), A.end(), [&](const int& a, const int& b) {
        string astr = to_string(a);
        string bstr = to_string(b);

        if (astr.size() < bstr.size())
            return a < b;
        else
            return a > b;
    });

    // cf. 
}