#include <iostream>
using namespace std;

int example(int a) {

  cout << a << endl;

  if (a == 0) return a;

  return example(--a);
}

int main() {
  example(5);
}