#include<bits/stdc++.h>
using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using str = string;
using vs = vector<str>;
using vvs = vector<vs>;
using vb = vector<bool>;
using vvb = vector<vb>;
using lll = __int128;
using P = pair<ll, ll>;
template<class T> using vec = vector<T>;
template<class T> using vv = vector<vector<T>>;
template<class T> using vvv = vector<vector<vector<T>>>;
template<class T> using pq = priority_queue<T>;
template<class T> using pq_min = priority_queue<T, vector<T>, greater<T>>;
template<class T> bool chmax(T& updated, const T& new_val) { if (updated < new_val) { updated = new_val; return true; } return false; }
template<class T> bool chmin(T& updated, const T& new_val) { if (new_val < updated) { updated = new_val; return true; } return false; }

#define rep(i, n) for(ll i = 0; i < (n); i++)
#define rep2(i, a, b) for(ll i = (a); i <= (b); i++)
#define repd(i, a, b) for(ll i = (a); i >= (b); i--)
#define ALL(v) v.begin(), v.end()

template<class T> void Sort(vec<T>& v) { sort(ALL(v)); }
void Sort(str& s) { sort(ALL(s)); }
template<class T> void rSort(vec<T>& v) { sort(v.rbegin(), v.rend()); }
void rSort(str& s) { sort(s.rbegin(), s.rend()); }
