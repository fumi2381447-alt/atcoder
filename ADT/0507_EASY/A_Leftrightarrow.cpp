/*
結果：AC
実行時間：1 ms / メモリ　3672 KiB
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;
  
  int n = S.length();
  
  if(n < 3) {
    cout << "No" << endl;
    return 0;
  }
  
  if(S[0] != '<' || S[n-1] != '>') {
    cout << "No" << endl;
    return 0;
  }
