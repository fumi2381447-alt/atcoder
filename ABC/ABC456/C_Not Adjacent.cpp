// 部分文字列と部分列の違いが分かっていなかった
// 部分文字列は飛ばして取ることができない、部分列は可能。ただし、両社とも順番は変えられない

#include<bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  long long L = S.size();
  long long x = 998244353;
  
  long long total = 0, current_len = 0;
  
  for(int i = 0; i < L; i++){
    if (i > 0 && S[i] == S[i-1]) {
        current_len = 1;
    } else {
        current_len++; 
    }
    total = (total + current_len) % x;
  }
  
  cout << total << endl;
}
