#include <bits/stdc++.h>

using namespace std;

const int MX = 100005;
int vis[MX];
int n, k;

int dx[3] = {-1,1,2};

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  queue<int>Q;

  cin >> n >> k;

  if(n==k){
    cout << 0;
    return 0;
  }

  fill(vis, vis+MX, -1);

  vis[n] = 0;
  Q.push(n);



  while(vis[k] == -1){

    int cur = Q.front(); Q.pop();

    for(int dir=0; dir < 3; dir ++){
      int cur1;

      if(dir==2){
        cur1 = cur * dx[dir];
      }
      else{
        cur1 = cur + dx[dir];
      }

      if(cur1 < 0 || cur1 >= MX)continue;
      if(vis[cur1] !=-1)continue;

      vis[cur1] = vis[cur] + 1;
      Q.push(cur1);

    }

  }
  cout << vis[k];

}
