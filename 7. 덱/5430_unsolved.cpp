#include <bits/stdc++.h>

using namespace std;

int main(){


  ios::sync_with_stdio(0);
  cin.tie(0);


  int T;
  cin >> T;



  while(T--){
    bool check = true;
    string s;
    deque<int>dq;
    queue<char>q;
    cin >> s;
    for(auto c: s)q.push(c);

    int n;
    cin >> n;

    char dum;
    cin >> dum;

    for(int i = 1; i < n; i++){
      int a;
      cin >> a;
      dq.push_back(a);
      cin >> dum;

    }
    if(n!=0){
      int a;
    cin >> a;
    dq.push_back(a);

    }

    cin >> dum;


    while(!q.empty()){
      if(q.front()=='R'){
        if(check==true)check=false;
        else check=true;
        q.pop();

      }
      else if(q.front()=='D' && check == true){
        q.pop();
        if(dq.empty()){

          break;
        }
        else dq.pop_front();


      }
      else{
        q.pop();
        if(dq.empty()){

          break;
        }
        else dq.pop_back();

      }


    }

    if(dq.empty()){
      cout << "error" << '\n';
    }
    else if(check == true){
      cout << '[';
      while(!dq.empty()){

        if(dq.size()==1){
          cout << dq.front();
        }
        else{
          cout << dq.front() << ',';
        }

        dq.pop_front();
      }
      cout << "]\n";
    }
    else{//check == false
      cout << '[';
      while(!dq.empty()){
        if(dq.size()==1){
          cout << dq.back();
        }
        else{
          cout << dq.back() << ',';
        }

        dq.pop_back();
      }
      cout << "]\n";
    }



  }

}
