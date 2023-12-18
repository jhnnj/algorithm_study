#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

string board[102];
bool vis[102][102];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int N;

void bfs(int i, int j){

  queue <pair<int,int>>Q;
  Q.push({i,j});
  vis[i][j] = 1;

  while(!Q.empty()){
    pair<int,int> cur = Q.front();Q.pop();

    for(int dir = 0; dir < 4; dir++){
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];

      if(nx < 0 || nx >= N || ny < 0 || ny >= N)continue;
      if(vis[nx][ny]==1 || board[nx][ny]!=board[i][j])continue;
      vis[nx][ny] = 1;
      Q.push({nx,ny});

    }
  }

}


int start(){

  int cnt = 0;


  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(vis[i][j]==0){
        cnt++;
        bfs(i, j);
      }

    }
  }
  return cnt;
}



int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> board[i];
  }

  int notG = start();

  for(int i = 0; i < N; i++){
    fill(vis[i], vis[i]+102, 0);
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){

      if(board[i][j] =='G'){
        board[i][j] = 'R';
      }

    }

  }

  int isG = start();

  cout << notG << ' '<< isG;


}
