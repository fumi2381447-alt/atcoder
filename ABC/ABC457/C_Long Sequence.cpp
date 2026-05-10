// 整数NとK、整数列 A1, ... ,AN、整数列 C = (C1, ... ,CN)が与えられる、
// ここでAiの長さはLi（個々で長さが違う）、また 1 <= K <= Σ[1,N]Ci*Li が保証される
// A と C から以下の手順で整数列 B = (B1, ... ,BN)
// Bは長さ0の整数列、i=1,..,N において末尾にAiをCi回連結させる
// このとき、BKがほしい

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<vector<int>> a(n);
    vector<long long> c(n);

    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        a[i].resize(l);

        for (int j = 0; j < l; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    for (int i = 0; i < n; i++) {
        long long length = (long long)a[i].size() * c[i];

        if (k <= length) {
            long long x = (k - 1) % (long long)a[i].size();
            cout << a[i][x] << '\n';
            return 0;
        }

        k -= length;
    }
}
