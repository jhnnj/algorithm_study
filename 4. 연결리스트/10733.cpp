#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  stack<int>S;
  int k;
  cin >> k;

  while(k--){
    int a;
    cin >> a;

    if(a==0)S.pop();
    else S.push(a);



  }
  int sum = 0;
  int _size = S.size();
  for(int i = 0 ; i < _size; i++){
    sum += S.top();

    S.pop();

  }
  cout << sum;

}
