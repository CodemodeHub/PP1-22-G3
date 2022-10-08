#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    char a[n];

    for (int i = 0; i < n; ++i) {
      a[i] = 'I';
    }

    for(int i = 0; i < k; ++i){
        int l, r;
        cin >> l >> r;  

        while(l - 1 <= r - 1){
          r--;
          a[r] = '.';
        }

        for (int i = r - 1; i <= l - 1; --i) {
          a[r] = '.';
        }

    }

    for(int i = 0; i < n; ++i){
        cout << a[i];
    }

    cout << endl;
}