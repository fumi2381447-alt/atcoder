#include<bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  
  map<string, int> counts;
  string most_name = "";
  int max = 0;
  
  for(int i=0; i<N; i++){
    string s;
    cin >> s;
    counts[s]++;

    // 投票結果を最多の名前の人に更新
    if(counts[s] > max){
      max = counts[s];
      most_name = s; 
    }
  }
  
  cout << most_name << endl;
  return 0;
}
