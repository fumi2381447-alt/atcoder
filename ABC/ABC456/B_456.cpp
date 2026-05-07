//一応一発でACが取れたが、問題に対してコードが長くなってしまった
// for文や参照で完結にできた

#include<bits/stdc++.h>
using namespace std;

int main() {
  int i;
  
  vector<int> vec1(6);
  vector<int> vec2(6);
  vector<int> vec3(6);
  
  for(i = 0; i < vec1.size(); i++){
    cin >> vec1.at(i);
  }
  for(i = 0; i < vec2.size(); i++){
    cin >> vec2.at(i);
  }
  for(i = 0; i < vec3.size(); i++){
    cin >> vec3.at(i);
  }
  
  int c14 = 0, c15 = 0, c16 = 0;
  
  for(i = 0; i < vec1.size(); i++){
    if(vec1.at(i) == 4){
      c14++;
    }
    else if(vec1.at(i) == 5){
      c15++;
    }
    else if(vec1.at(i) == 6){
      c16++;
    }
  }
  
  int c24 = 0, c25 = 0, c26 = 0;
  
  for(i = 0; i < vec1.size(); i++){
    if(vec2.at(i) == 4){
      c24++;
    }
    else if(vec2.at(i) == 5){
      c25++;
    }
    else if(vec2.at(i) == 6){
      c26++;
    }
  }
  
  int c34 = 0, c35 = 0, c36 = 0;
  
  for(i = 0; i < vec1.size(); i++){
    if(vec3.at(i) == 4){
      c34++;
    }
    else if(vec3.at(i) == 5){
      c35++;
    }
    else if(vec3.at(i) == 6){
      c36++;
    }
  }
  
  int sum = 0;
  sum = c14*c25*c36 + c14*c26*c35 + c15*c24*c36 + c15*c26*c34 + c16*c24*c35 + c16*c25*c34; 
  
  double p = sum / 216.0;
  
  cout << p << endl;
}

/*
int main() {
    // 3つのサイコロの各出目の数を格納する [サイコロ番号][出目]
    // 1〜6までカウントしたいので、サイズは 7 確保すると楽です
    vector<vector<int>> counts(3, vector<int>(7, 0));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            int val;
            cin >> val;
            if (val >= 1 && val <= 6) {
                counts[i][val]++;
            }
        }
    }

    // カウント変数を見やすく別名に（参照を利用）
    // counts[0][4] が A4 に対応します
    auto &A = counts[0], &B = counts[1], &C = counts[2];

    // 数学的な順列を計算
    // {4, 5, 6} の並べ替え 3! = 6 通りを足し合わせる
    long long sum = 0;
    sum += (long long)A[4] * B[5] * C[6];
    sum += (long long)A[4] * B[6] * C[5];
    sum += (long long)A[5] * B[4] * C[6];
    sum += (long long)A[5] * B[6] * C[4];
    sum += (long long)A[6] * B[4] * C[5];
    sum += (long long)A[6] * B[5] * C[4];

    double p = sum / 216.0;
    cout << fixed << setprecision(10) << p << endl;
}
*/
