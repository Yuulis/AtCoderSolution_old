#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

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

    // 大文字から小文字へ
    S[1] = tolower(S[1]);

    // 小文字から大文字へ
    S[2] = toupper(S[2]);

    // 文字列全体を大文字へ
    transform(all(S), S.begin(), toupper);

    // 2文字目から4文字目を小文字へ
    transform(S[2], S[4], S[2], tolower);
}