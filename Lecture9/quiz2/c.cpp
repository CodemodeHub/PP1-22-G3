#include <bits/stdc++.h>

using namespace std;
// 10
// 1 2 2 9 8 9 6 6 7 6
int main(){
  int n;
  cin >> n;
  int a[1001] = {0};
  int x, maxi = 0;
  for(int i = 0; i < n; i++){
    cin >> x;
    maxi = max(maxi, x);
    a[x]++; // a[1] = 1, a[2] = 2, a[9] = 2, a[8] = 1, a[6] = 3, a[7] = 1
  }
  int maxi2 = 0;
  for(int i = 0; i <= maxi; i++){
    if(a[i] > maxi2) maxi2 = a[i];
    maxi2 = max(maxi2, a[i]);
  }

  for(int i = maxi; i >= 0; i--){
    if(a[i] == maxi2) cout << i << " ";
  }
}