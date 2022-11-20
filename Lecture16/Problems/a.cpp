#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector <int> v;

  int x = 1;

  while (x != 0) {
    cin >> x;
    if (x != 0) v.push_back(x);
  }
  
  sort(v.begin(), v.begin() + v.size());

  for (int i = 0; i < v.size(); ++i) cout << v[i] << " ";
  cout << endl;
}