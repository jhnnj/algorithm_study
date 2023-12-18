#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;
  int N;
  cin >> N;

  list<char>L;
  for(auto c: s)L.push_back(c);

  auto cursor = L.end();

  while(N--){

    char a;
    cin >> a;

    if(a=='L'){
      if(cursor!=L.begin())cursor--;

    }

    else if(a=='D'){
      if(cursor!=L.end())cursor++;

    }
    else if(a=='B'){
      if(cursor!=L.begin()){

        cursor = L.erase(--cursor);
      }

    }
    else{//a=='P'
      char b;
      cin >> b;
      L.insert(cursor, b);

    }


  }
  for(auto c: L)cout << c;

}
