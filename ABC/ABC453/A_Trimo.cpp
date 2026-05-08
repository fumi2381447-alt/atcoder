#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int start = 0;
    // 先頭から 'o' が続く間だけ、開始位置(start)をインクリメント
    // start < N は、すべての文字が 'o' だった場合にはみ出さないように
    while (start < N && S[start] == 'o') {
        start++;
    }

    // start番目から最後までの部分文字列(substr)を出力
    cout << S.substr(start) << endl;

    return 0;
}
