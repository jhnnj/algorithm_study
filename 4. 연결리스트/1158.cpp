#include <bits/stdc++.h>

using namespace std;

const int MX = 5005;
int dat[MX];
int nxt[MX];
int cursor = 0;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int a;
  cin >> a;
  for(int i =1; i <= a; i++){

    dat[i] = i;
    nxt[i] = i+1;
  }

  nxt[a] = 1;
  nxt[0] = 1;

  int b;
  cin >> b;
  b--;
  cout <<'<';

  for(int i = 1; i < a; i++){
    while(b--)cursor = nxt[cursor];

    cout << dat[nxt[cursor]] << ", ";

    nxt[cursor] = nxt[nxt[cursor]];


  }
  cout << dat[cursor] << '>';
}
