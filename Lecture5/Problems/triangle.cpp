#include <iostream>
using namespace std;
int main(){
    int n, m;

    cin >> n >> m;
    char a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
          a[i][j] = '.';
        }
    }

    int cnt = 1;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
          if (j < cnt) cout <<  "* ";
          else cout << a[i][j] << " ";
        }
        if (n / 2 > i) cnt++;
        else cnt--;
      cout << endl;
    }
}