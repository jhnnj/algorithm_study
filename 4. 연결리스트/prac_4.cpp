#include <bits/stdc++.h>

using namespace std;

int main(){

  list<int>L = {1,2};
  list<int>::iterator t = L.begin();
  L.push_back(5);
  cout << *t << "\n";//1
  L.insert(t, 6); // 6 1 2 5
  cout << *t << "\n";//1
  t++; // 2
  cout << *t << "\n";

  for(auto i:L)cout << i << ' ';
  cout << '\n';

  t = L.erase(t);
  cout << *t << '\n'; //5

  L.push_back(10);
  L.push_back(20);

  t = L.end();
  t--;

  cout << *t << '\n'; // 20

  t = L.erase(t);
  t--;
  cout << *t << '\n'; // 10


}
