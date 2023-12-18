#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  queue<int>q;


  while(N--){

    string op;
    cin >> op;

    if(op == "push"){
      int a;
      cin >> a;

      q.push(a);
    }
    else if(op == "pop"){
      if(q.empty())cout << -1 << '\n';
      else {
          cout << q.front() << '\n';
          q.pop();
      }

    }
    else if(op == "size")cout << q.size() << '\n';
    else if(op == "empty")cout << q.empty() << '\n';
    else if(op == "front"){
        if(q.empty())cout << -1 << '\n';
        else cout << q.front() << '\n';

    }
    else{//op == "back"
      if(q.empty())cout << -1 << '\n';
      else cout << q.back() << '\n';

    }

  }
}
