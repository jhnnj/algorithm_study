#include <bits/stdc++.h>

using namespace std;

int main(){

  queue<int> Q;
  Q.push(10);
  Q.push(20);
  Q.push(30); // 10, 20, 30

  cout << Q.size() <<'\n';

  if(Q.empty())cout << "Q is empty\n";
  else cout << "Q is not empty\n";

  Q.pop(); // 20, 30

  cout << Q.front() << '\n'; // 20
  cout << Q.back() << '\n'; // 30
  Q.push(40);// 20, 30, 40

  Q.pop(); // 30, 40
  cout << Q.front() << '\n'; // 30

}
