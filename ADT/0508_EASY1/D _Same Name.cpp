#include<bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  
  map<string, int> counts;
  bool x = false;
  
  for(int i=0; i<N; i++){
    string s, t;
    cin >> s >> t;
    
    string name = s + " " + t;

    // 同姓同名の判定
    if(counts.count(name)){
      x = true;
    }
    counts[name]++;
  }
  
  if(x){
    cout << "Yes" << endl; 
  } else {
    cout << "No" << endl; 
  }
  
  return 0;
}
