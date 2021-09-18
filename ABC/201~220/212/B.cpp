#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> X(5);
    for (int i = 0; i < 5; i++) {
        cin >> X.at(i);
    }

    bool first = true;
    bool next = true;
    for (int i = 0; i < 3; i++) {
        if (X.at(i) != X.at(i + 1)) first = false;
        if ((X.at(i) + 1) % 10 != X.at(i + 1) % 10) next = false;
    }

    if (first || next)
        cout << "Weak" << endl;
    else
        cout << "Strong" << endl;
}