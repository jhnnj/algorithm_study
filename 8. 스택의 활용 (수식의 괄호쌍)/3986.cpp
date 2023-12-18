#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, result = 0;
  cin >> n;

  while(n--){

    string s;
    cin >>s;
    stack <char> st;

    for(char c: s){

      if(st.empty()){
        st.push(c);


      }
      else{
        if(st.top()!=c){
          st.push(c);

        }
        else st.pop();
      }

    }

    if(st.empty())result++;
  }
  cout << result;


}
