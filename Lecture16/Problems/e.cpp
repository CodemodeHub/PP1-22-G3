#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void someFunction(int x = 4) {
//   cout << x << endl;
// }

int main() {
  int n, x;
  cin >> n >> x;
  vector <int> v;

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  for (int i = 0; i < x - 1; ++i) {
    for (int j = i + 1; j < x - 1; ++j) {
      if (v[i] > v[j]) swap(v[i], v[j]);
    }
  }

  for (int i = x; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (v[i] < v[j]) swap(v[i], v[j]);
    } 
  }
  
  // sort(v.begin(), v.begin() + x - 1);
  // sort(v.begin() + x, v.end(), greater<int>());

  for (int i = 0; i < n; ++i) cout << v[i] << " ";
  cout << endl;
}