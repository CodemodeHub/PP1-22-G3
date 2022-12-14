#include <bits/stdc++.h>

using namespace std;

void toBinary(int n){
    string res = "";
    if(n == 0){
        res = "0";
    }
    while(n > 0){
        res = char((n % 2) + 48) + res;
        n /= 2;
    }
    cout << res << "\n";
}

int main(){
    int n, x;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    for_each(v.begin(), v.end(), toBinary);
}