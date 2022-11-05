#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> v;

bool func(int i, int w, const vector<int>& a) {
    if (i == 0) {
        if (w == 0) return true;
        else return false;
    }

    if (v[i][w] != -1) return v[i][w];

    if (func(i - 1, w, a)) return v[i][w] = 1;

    if (func(i - 1, w - a[i - 1], a)) return v[i][w] = 1;

    return v[i][w] = 0;
}

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    v.assign(N + 1, vector<int>(W + 1, -1));

    if (func(N, W, a)) cout << "Yes" << endl;
    else cout << "No" << endl;
}