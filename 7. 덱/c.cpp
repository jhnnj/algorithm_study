#include <bits/stdc++.h>

using namespace std;

int main(){

  deque<int>DQ;



  for(int i = 1; i <= 10; i++)DQ.push_back(i);

  int idx = find(DQ.begin(), DQ.end(), 5) - DQ.begin();
  cout << idx;

}
