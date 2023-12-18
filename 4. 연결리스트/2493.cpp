#include <bits/stdc++.h>

using namespace std;

int main(){

  //ios::sync_with_stdio(0);
  //cin.tie(0);

  stack<int>s, tmp, result;


  int N;
  cin >> N;

  for(int i = 0; i < N; i++){
    int a;
    cin >> a;
    s.push(a);
    cout << s.top();
  }

  while(N--){
    cout << N << '\n';
    int a = s.top();
    int b = s.size();

    if(!s.empty()){
      tmp.push(s.top());
      s.pop();
    }
    if(!s.empty()){
      while(s.top() < a){

      cout << s.top() << "vv\n";
      tmp.push(s.top());
      s.pop();
      }

    }


    if(s.empty())result.push(0);
    else result.push(s.size());

    while(b-s.size() != 1){
      s.push(tmp.top());
      tmp.pop();
    }

  }

  while(!result.empty()){
    cout << result.top() << ' ';
    result.pop();

  }




}
