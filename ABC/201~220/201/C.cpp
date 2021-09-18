#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

#define INF 1e+9;
#define MOD 1000000007;

int main() {
    string S;
    cin >> S;

    int cnt = 0;
    for (int i = 0; i < 10000; i++) {
        vector<bool> flag(10);
        int num = i;
        for (int j = 0; j < 4; j++) {
            flag[num % 10] = true;
            num /= 10;
        }

        bool check = true;
        for (int j = 0; j < 10; j++) {
            if (S[j] == 'o' && !flag[j]) check = false;
            if (S[j] == 'x' && flag[j]) check = false;
        }

        cnt += check;
    }

    cout << cnt << endl;
}