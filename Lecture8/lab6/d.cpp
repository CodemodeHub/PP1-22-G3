#include <bits/stdc++.h>

using namespace std;

void hypo(int x, int y){
  double h = sqrt(pow(x, 2) + pow(y, 2));
  cout << setprecision(4) << h << "\n";
}

int main(){
  int a, b;
  cin >> a >> b;
  hypo(a, b);
}  