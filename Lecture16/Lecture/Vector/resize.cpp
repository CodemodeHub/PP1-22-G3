#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector <int> v;

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  v.resize(3);

  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }

  cout << endl;
}