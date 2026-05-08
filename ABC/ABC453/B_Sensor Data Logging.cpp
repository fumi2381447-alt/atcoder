/*
方針：「最後に保存した値」との差を見る

最初のコード: abs(A.at(i) - A.at(i+1))　→　「隣り合う値」の差しか見ていない

修正方針: abs(現在の値 - 最後に保存した値) と比較する必要がある　→　int last_val = A.at(0); のような変数を用意
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, X;
    cin >> T >> X;

    vector<int>  A(T+1);
    for(int i=0; i<=T; i++) cin >> A.at(i);
    
    int last_val = A.at(0);
    cout << 0 << " " << last_val << endl;
    
    for(int i=0; i<=T; i++) {
      if(abs(A.at(i) - last_val) >= X) {
        last_val = A.at(i);
        cout << i << " " << last_val << endl;
      }
    } 
    
     return 0;
}
