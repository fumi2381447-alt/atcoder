// mapの理解が不十分だった。mapについては調べながらコードを作成。
// どんな数値がいくつあるのかを記録できる
// 扱う値が大きいときはlong long（またはint64_t）を使用する

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> A(N);
    map<long long, long long> counts; // 各値が合計でいくらあるか
    long long total_sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        total_sum += A[i];
        // 値 A[i] を消した時に減る分を map に加算
        counts[A[i]] += A[i];
    }

    // 各値ごとの「消せる合計値」だけをベクトルに抽出
    vector<long long> values;
    for (auto const& [val, sum] : counts) {
        values.push_back(sum);
    }

    // 「消せる合計値」が大きい順にソート
    sort(values.begin(), values.end(), greater<long long>());

    // 最大 K 種類まで消す
    long long reduced = 0;
    for (int i = 0; i < min((int)values.size(), K); i++) {
        reduced += values[i];
    }

    // 最小の和 = 全体の和 - 消した分の最大
    cout << total_sum - reduced << endl;
}
