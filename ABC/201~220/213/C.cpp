#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A.at(i) >> B.at(i);

    vector<int> Hs = A;
    vector<int> Ws = B;
    sort(Hs.begin(), Hs.end());
    sort(Ws.begin(), Ws.end());

    Hs.erase(unique(Hs.begin(), Hs.end()), Hs.end());
    Ws.erase(unique(Ws.begin(), Ws.end()), Ws.end());

    for (int i = 0; i < N; i++) {
        A.at(i) = lower_bound(Hs.begin(), Hs.end(), A.at(i)) - Hs.begin();
        B.at(i) = lower_bound(Ws.begin(), Ws.end(), B.at(i)) - Ws.begin();
    }

    for (int i = 0; i < N; i++) {
        cout << A.at(i) + 1 << " " << B.at(i) + 1 << endl;
    }
}