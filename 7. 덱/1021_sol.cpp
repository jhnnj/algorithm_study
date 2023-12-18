#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);
  int N, M, result = 0;
  deque<int>DQ;

  cin >> N >> M;

  for(int i = 1; i <= N; i++)DQ.push_back(i);

  while(M--){

    int a;
    cin >> a;
    int idx = find(DQ.begin(), DQ.end(), a) - DQ.begin();

    while(DQ.front()!=a){

      if(idx < (DQ.size() - idx)){
        DQ.push_back(DQ.front());
        DQ.pop_front();

      }
      else{

        DQ.push_front(DQ.back());
        DQ.pop_back();

      }
      result++;


    }
    DQ.pop_front();




  }
  cout << result;

}
