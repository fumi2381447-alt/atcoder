// 問題理解が遅かった。数値の範囲が狭かったため、h1,h2,w1,w2については全てで試すようにした。
// ベクトルSの書き方も現時点ではイマイチ

#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  // H行分の文字列として読み込む
  vector<string> S(H);
  for (int i = 0; i < H; i++) {
    cin >> S.at(i);
  }

  int ans = 0;

  // 1. 長方形の範囲 (h1, h2, w1, w2) をすべて試す
  for (int h1 = 0; h1 < H; h1++) {
    for (int h2 = h1; h2 < H; h2++) {
      for (int w1 = 0; w1 < W; w1++) {
        for (int w2 = w1; w2 < W; w2++) {
          
          // 2. この長方形が点対称か判定する
          bool is_ok = true;
          for (int i = h1; i <= h2; i++) {
            for (int j = w1; j <= w2; j++) {
              // 対称点の計算（0始まりの場合、和から引く）
              int ni = h1 + h2 - i;
              int nj = w1 + w2 - j;
              
              if (S.at(i)[j] != S.at(ni)[nj]) {
                is_ok = false;
                break;
              }
            }
            if (!is_ok) break;
          }
          
          if (is_ok) ans++;
        }
      }
    }
  }

  cout << ans << endl;
}
