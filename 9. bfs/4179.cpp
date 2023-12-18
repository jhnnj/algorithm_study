#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

string board[1002];
int fire_dist[1002][1002];
int ji_dist[1002][1002];
int n,m;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  queue<pair<int,int>>Q;

  cin >> n >> m;

  for(int i = 0; i < n; i++)
    cin >> board[i];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(board[i][j]=='F'){
        fire_dist[i][j] = 0;
        Q.push({i,j});
      }
      if(board[i][j]=='.'){
        fire_dist[i][j] = -1;
        ji_dist[i][j] = -1;
      }

    }

  }


  while(!Q.empty()){
    pair<int, int> cur = Q.front();
    Q.pop();

    for(int dir= 0; dir < 4; dir++){

      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];

      if(nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
      if(fire_dist[nx][ny] >= 0)continue;
      fire_dist[nx][ny] = fire_dist[cur.X][cur.Y] + 1;
      Q.push({nx, ny});

    }


  }

  for(int i = 0; i < n; i++){//ji 처음 위치 세팅
    for(int j = 0; j < m; j++){
      if(board[i][j]=='J'){
        ji_dist[i][j] = 0;
        Q.push({i,j});
      }
    }

  }

  while(!Q.empty()){
    pair<int, int> cur = Q.front();
    Q.pop();

    for(int dir= 0; dir < 4; dir++){

      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];


      if(nx < 0 || nx >= n || ny < 0 || ny >= m){
        cout << ji_dist[cur.X][cur.Y] +1;
        return 0;
      }
      if(ji_dist[nx][ny]>=0)continue;
      if(fire_dist[nx][ny] != -1 && ji_dist[cur.X][cur.Y] + 1 >= fire_dist[nx][ny])continue;


      ji_dist[nx][ny] = ji_dist[cur.X][cur.Y] + 1;
      Q.push({nx, ny});

    }


  }
  cout << "IMPOSSIBLE";



}
