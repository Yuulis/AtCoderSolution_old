#include <bits/stdc++.h>
using namespace std;

#define INF 1e+9;

int main() {
    char a, b, c;
    cin >> a >> b >> c;

    int cnt = 0;
    if (a == '1') cnt++;
    if (b == '1') cnt++;
    if (c == '1') cnt++;

    cout << cnt << endl;
}