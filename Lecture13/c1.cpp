#include <iostream>
using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;

  int lastDigit = n % 10;
  
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }

  if (sum % lastDigit == 0) {
    cout << "yes";
  } else cout << "no";

  cout << endl;
}