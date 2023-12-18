#include <bits/stdc++.h>

using namespace std;

int main(){

  stack<int>S;
  int K;
  cin >> K;

  while(K--){
    int a;
    cin >> a;
    if(a==0)S.pop();
    else S.push(a);


  }

  int sum = 0;

  while(!S.empty()){

    sum += S.top();
    S.pop();

  }
  cout << sum;
}
