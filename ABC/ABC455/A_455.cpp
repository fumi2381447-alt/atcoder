/*
結果：AC
実行時間：1 ms / メモリ　3684 KiB
メモ：かつ（&&）を用いてシンプルに判定。
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  
  if(A != B && B == C){
    cout << "Yes" << endl;
  } 
  else{
    cout << "No" << endl;
  }
}
