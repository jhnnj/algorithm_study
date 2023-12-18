#include <bits/stdc++.h>

using namespace std;

int front(deque<int>&dq, int a){
  int cnt = 0;
  while(a!=dq.front()){

    dq.push_back(dq.front());
    dq.pop_front();
    cnt ++;
  }
  dq.pop_front();

  return cnt;
}

int back(deque<int>&dq, int a){
  int cnt = 0;
  while(a!=dq.front()){

    dq.push_front(dq.back());
    dq.pop_back();
    cnt ++;
  }
  dq.pop_front();
  return cnt;
}

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);
  deque <int> dq, dq_front, dq_back;

  int N, M;
  cin >> N >> M;

  for(int i =1; i <= N; i++){
    dq.push_back(i);
  }

  int result = 0;

  while(M--){

    int a;
    cin >> a;

    dq_front = dq;
    dq_back = dq;

    int f, b;
    f = front(dq_front, a);
    b = back(dq_back, a);

    if(f<b){
      dq = dq_front;
      result += f;
    }
    else{

      dq = dq_back;
      result += b;
    }


  }

  cout << result;


}
