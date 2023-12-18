#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  while(1){

    int flag = 1;
    string s;
    getline(cin, s);
    if(s==".")break;

    stack<int>st;

    for(char c: s){

      if(c=='('||c=='['){
        st.push(c);

      }
      else if(c==')'){
        if(st.empty()){
          cout << "no\n";
          flag = 0;

        }
        else if(st.top()!='('){
          cout << "no\n";
          flag = 0;
        }
        else if(st.top()=='('){
          st.pop();
        }
      }
      else if(c==']'){
        if(st.empty()){
          cout << "no\n";
          flag = 0;

        }
        else if(st.top()!='['){
          cout << "no\n";
          flag = 0;
        }
        else if(st.top()=='['){
          st.pop();
        }
      }
      else continue;
    if(flag == 0)break;

    }

    if(flag == 1){
      if(st.empty())cout << "yes\n";
      else cout << "no\n";
    }

  }

}
