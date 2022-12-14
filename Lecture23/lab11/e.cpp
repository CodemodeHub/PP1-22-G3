#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s;
    map<char, int> m;
    for(int i = 0; i < n; i++){
        cin >> s;
        set<char> st;
        for(int j = 0; j < s.size(); j++){
            st.insert(s[i]); 
        }
        set<char> :: iterator it;
        for(it = st.begin(); it != st.end(); it++){
            m[(*it)]++;
        }
    }
    // cout << "---------------------------------------------------\n"
    bool ok = false;

    map<char, int> :: iterator itm;
    for(itm = m.begin(); itm != m.end(); itm++){
        if((*itm).second == n){
            ok = true;
            cout << (*itm).first << " ";
        }
    }
    if(!ok) cout << "NO COMMON CHARACTERS";
}

