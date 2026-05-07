/*
問題名：A - Dice
結果：AC
実行時間：1 ms / メモリ　3672 KiB
メモ：サイコロ三つの和を考えるので、3 <= X <= 18 で判定。elseに{}をつけ忘れ、return 0;がなかった。
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;
  
  if(3 <= X && X <= 18){
    cout << "Yes" << endl;
  }
  
  else
    cout << "No" << endl;
  
}
