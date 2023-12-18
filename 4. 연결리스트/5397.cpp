#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;
  while(N--){
    string s;
    cin >> s;

    list <char>L ={};
    auto cursor = L.begin();

    for(auto c:s){

      if(c=='-'){
        if(cursor != L.begin())cursor = L.erase(--cursor);

      }
      else if(c=='<'){
        if(cursor!=L.begin())cursor--;
      }
      else if(c=='>'){

        if(cursor!=L.end())cursor++;

      }
      else{
        L.insert(cursor, c);
      }


    }
    for(auto c:L)cout << c;
    cout << '\n';
  }



}
