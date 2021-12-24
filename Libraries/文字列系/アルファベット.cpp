#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;

    // 小文字アルファベットからなる文字列Sを、5文字後ろにずらして文字列Tにする
    for (auto &c : S) {
        int x = c - 'a';  // 大文字なら'A'
        x = (x + 5) % 26;
        T += char(x + 'a');
    }

    // 辞書順i文字目のアルファベット
    int i = 3;
    S += (char)('a' + i - 1);
}