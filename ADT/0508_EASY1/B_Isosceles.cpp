#include<bits/stdc++.h>
using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  // 三角形の作成条件
  if(a + b  > c && b + c > a && c + a > b){
    if(a == b || b == c || c == a){
      cout << "Yes" << endl;
    } else {
    cout << "No" << endl;
    }
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}
