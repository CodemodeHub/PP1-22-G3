#include <bits/stdc++.h>

using namespace std;
int n;
int dilyara(int a[], int b[]){
  int cnt = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(a[i] == b[j] && b[j] != 0){
        cnt++;
        b[j] = 0;
        break;
      }
    }
  }
  return cnt;
}

int main(){
  cin >> n;
  int a[n], b[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cin >> b[i];

  cout << dilyara(a, b) << "\n";
}