// 数列(A(1,L1), ... ,A(N,LN))が与えられる、ここでLiはAiにおける長さ（個々で長さが違う）
// このとき、A(X,Y)がほしい

#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<vector<int>> a(n);
  
  for(int i = 0; i < n; i++) {
    int l;
    cin >> l;
    a[i].resize(l);
    
    for(int j = 0; j < l; j++) {
      cin >> a[i][j];
    }
  }  
  
  int x, y;
  cin >> x >> y;
  
  cout << a[x-1][y-1] << endl;
  
  return 0;
}
