#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int x) {
  int absoluteValue = abs(x);
  if (absoluteValue <= 1) {
    return false;
  } 
  for (int i = 2; i <= sqrt(absoluteValue); ++i) {
    if (absoluteValue % i == 0) return false;
  }
  return true;
}

int main() {
  int n; 
  cin >> n;
  vector <int> v;

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  cout << count_if(v.begin(), v.end(), isPrime) << endl;
}