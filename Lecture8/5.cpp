#include <iostream>
using namespace std;

int n = 10;

void Hello(int a, int b, char s, string str, int d[]) {
  cout << n << endl;

  cout << a << " " << b << " " << s << " " << str << endl;
  for (int i = 0; i < 4; ++i) cout << d[i] << " ";
  cout << endl;
}

int main() {

  int d[4] = {1, 3, 4, 5};

  string str = "fasfa";

  // str.find("fa", 1);

  Hello(1, 3, 'a', "fasfa", d);



  // for (int i = 0; i < 10; ++i) {
  //   isNumberLargerThan5(doubleNumber(i));
  // }

  return 0;
}
