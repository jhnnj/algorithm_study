#include <bits/stdc++.h>


using namespace std;

int board[102][102][102];
int dist[102][102][102];

int dx[6] = {1,0,0,-1,0,0};
int dy[6] = {0,1,0,0,-1,0};
int dz[6] = {0,0,1,0,0,-1};

int N,M,H;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  queue <tuple<int,int,int>>Q;

  cin >> M >> N >> H;


  for(int k = 0; k < H; k++){
    for(int i = 0; i < N; i++){
      for(int j = 0; j < M; j++){
        int tmp;

        cin >> tmp;
        board[i][j][k] = tmp;

        if(tmp== 1){
          dist[i][j][k] = 0;
          Q.push({i,j,k});
        }
        else if(tmp == 0)dist[i][j][k] = -1;
      }
    }
  }

  int mx = 0;

  while(!Q.empty()){

    auto cur = Q.front(); Q.pop();
    int curX, curY, curZ;

    tie(curX, curY, curZ) = cur;

    for(int dir = 0; dir < 6; dir++){

      int nx = curX + dx[dir];
      int ny = curY + dy[dir];
      int nz = curZ + dz[dir];

      if(nx < 0 || nx >= N || ny < 0 || ny >= M || nz < 0 || nz >= H)continue;
      if(dist[nx][ny][nz]>=0)continue;


      dist[nx][ny][nz] = dist[curX][curY][curZ] + 1;
      Q.push({nx, ny, nz});

    }

    if(Q.empty()) mx = dist[curX][curY][curZ];

  }



    for(int k = 0; k < H; k++){
      for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){

          if(dist[i][j][k]==-1){
            cout << -1;
            return 0;
          }
        }
      }
    }

    cout << mx;
}
