  #include <iostream>
  using namespace std;

  int c = 10;

  void Hello() {
    cout << "Hello '1000 words per minute' student" << endl;
  }

  int doubleNumber(int a) {

    // cout << a << " ";

    return a * 2;
  }

  bool isNumberLargerThan5(int b) {
    return b > 5;
  }

  int main() {

    cout << c << endl;

    // for (int i = 0; i < 10; ++i) {
    //   Hello();
    // }

    // for (int i = 0; i < 10; ++i) {
    //   cout << doubleNumber(i) << endl;
    // }

    for (int i = 0; i < 10; ++i) {
      isNumberLargerThan5(doubleNumber(i));
    }

    return 0;
  }
