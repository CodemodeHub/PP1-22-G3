#include <iostream>
using namespace std;

int main() {
  
  int a;

  cin >> a;

  string binary = "";

  while (a != 0) {

    binary = char(a % 2 + 48) + binary;

    a /= 2;

  }

  cout << binary << endl;

}