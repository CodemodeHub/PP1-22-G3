#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector <int> vv(n);

  for (int i = 0; i < n; ++i) cout << vv[i] << " ";
  
  cout << endl;
}