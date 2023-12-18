#include <bits/stdc++.h>

using namespace std;
//n부터 1까지 출력, n부터 1까지 합
int sum = 0;
void recur1(int N){

  cout << N << ' ';
  if(N>1)
    recur1(N-1);
  else return;
}

void recur2(int N){

  sum += N;
  if(N-1 >=1){
    recur2(N-1);
  }
  else return;

}

int main(){

  int n;
  cin >> n;

  recur1(n);
  recur2(n);
  cout << sum;
}
