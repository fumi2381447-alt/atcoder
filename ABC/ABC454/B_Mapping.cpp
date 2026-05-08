// 同じものを数えたりする場合は、mapが有効

#include<bits/stdc++.h>
using namespace std;

int main() {

  unsigned int N, M;
  cin >> N >> M;
  
  map<int, int> counts;
  
  for(int i=0; i<N; i++){
    int f;
    cin >> f;
    counts[f]++;
  }
  
  // 質問 1: 全員が異なる服を着ているか？
  if(counts.size() == N){
    cout << "Yes" << endl;
  } else { 
    cout << "No" << endl; 
  }
  
  // 質問 2: 全種類(M種類)の服が少なくとも1人ずつ着られているか？
  if(counts.size() == M){
    cout << "Yes" << endl;
  } else { 
    cout << "No" << endl; 
  }
  return 0;
}
