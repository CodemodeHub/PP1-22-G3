#include <bits/stdc++.h>

using namespace std;

void valid(string s, int n){
  int cnt = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i].tolower() == 'a' || s[i])
    if(isdigit(s[i])) cnt++; // s[i] >= 48 && s[i] <= 57
  }
  if(cnt >= n) cout << "YES" << "\n";
  else cout << "NO" << "\n";
}

int main(){
  string s;
  int n;
  cin >> s >> n;
  valid(s, n);
}