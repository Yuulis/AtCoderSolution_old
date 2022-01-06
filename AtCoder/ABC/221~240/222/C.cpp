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

// ======================================== //

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> A(2 * N);
    for (int i = 0; i < 2 * N; i++) cin >> A[i];

    vector<pair<int, int>> win(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        win[i].first = 0;
        win[i].second = i;
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < 2 * N; j += 2) {
            int a_num = abs(win[j].second);
            string a_hands = A[a_num];
            int b_num = abs(win[j + 1].second);
            string b_hands = A[b_num];

            if (a_hands[i] == b_hands[i])
                continue;
            else if (a_hands[i] == 'G') {
                if (b_hands[i] == 'C')
                    win[j].first--;
                else
                    win[j + 1].first--;
            } else if (a_hands[i] == 'C') {
                if (b_hands[i] == 'P')
                    win[j].first--;
                else
                    win[j + 1].first--;
            } else if (a_hands[i] == 'P') {
                if (b_hands[i] == 'G')
                    win[j].first--;
                else
                    win[j + 1].first--;
            }
        }

        sort(win.begin(), win.end());
    }

    for (int i = 0; i < 2 * N; i++) {
        cout << win[i].second + 1 << endl;
    }
}