#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, m; 
  cin >> n >> m;
  vector <int> v;

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  rotate(v.begin(), v.begin() + m, v.end());

  reverse(v.begin(), v.end());
  
  for (int i = 0; i < n; ++i) {
    cout << v[i] << " ";
  }
  cout << endl;
}