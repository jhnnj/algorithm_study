#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);
  while(1){
    string s;
    getline(cin, s);
    if(s==".")break;
    bool isValid = true;
    stack<char>st;

    for(char c: s){

      if(c=='(' || c=='['){
        st.push(c);
      }
      else if(c == ')'){

        if(st.empty()||st.top()!='('){
          isValid =false;
          break;
        }
        else st.pop();

      }
      else if(c == ']'){
        if(st.empty()||st.top()!='['){
          isValid =false;
          break;
        }
        else st.pop();

      }


    }
    if(!st.empty())isValid = false;
    if(isValid)cout << "yes\n";
    else cout << "no\n";

  }

}
