#include <bits/stdc++.h>
using namespace std;

#define INF 1e+9;

int main() {
    int N, P, Q;
    cin >> N >> P >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                for (int l = 0; l < k; l++) {
                    for (int m = 0; m < l; m++) {
                        if ((long long)A.at(i)* A.at(j)%P* A.at(k)%P *A.at(l)%P *A.at(m)%P == Q) cnt++;
                    }
                }
            }
        }
    }

    cout << cnt << endl;
}