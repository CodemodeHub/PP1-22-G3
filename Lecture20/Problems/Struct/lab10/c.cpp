#include <bits/stdc++.h>

using namespace std;

bool check(char c, char x){
  int a = (c - 48) * 10 + (x - 48);
  int y = sqrt(a);
  return y * y == a;
}

int main(){
  string s;
  cin >> s;
  stack<char> st;
  for(int i = 0; i < s.size(); i++){
    if(!st.empty()){
      if(check(st.top(), s[i])) st.pop();
      else st.push(s[i]);
    }else st.push(s[i]);  
  }

  if(st.empty()) cout << "Stack is empty\n";
  else{
    while(!st.empty()){
      cout << st.top();
      st.pop();
    }
  }
}