#include <iostream>
using namespace std;

int main()
{
    string s;
    
    cin >> s;
    
    int x = 0, y = 0;
    
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'F') y++;
        if (s[i] == 'B') --y;
        if (s[i] == 'R') x++;
        if (s[i] == 'L') x--;
    }
    
    string ans = "";
    
    while (y > 0) {
        ans += 'B';
        y--;
    }
    
    while (y < 0) {
        ans += 'F';
        y++;
    }
    
    while (x > 0) {
        ans += 'L';
        x--;
    }
    
    while (x < 0) {
        ans += 'R';
        x++;
    }

    cout << ans;
    
    return 0;
}
