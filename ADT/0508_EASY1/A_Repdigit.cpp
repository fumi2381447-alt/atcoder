#include<bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  
  int x = N % 10;
  int y = (N % 100) / 10;
  int z = N / 100;
  
  if(x == y && y == z){ 
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
