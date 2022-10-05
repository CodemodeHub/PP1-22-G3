#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[n];

  for(int i = 0; i < n; ++i){
    cin >> a[i];
  } 

  int count = 0;

  for(int i = 0; i < n; ++i){
    if (i == 0) {
      count = 1;
      continue;
    }     1        0
    if (a[i] != a[i-1]) count++;
  } 

  1 2 3 4 5 6 7  // Array
  0 1 2 3 4 5 6  // Indices

  cout << count;
} 