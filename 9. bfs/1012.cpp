#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int board[52][52];
int vis[52][52];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int n, m, k;
int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;

  while(T--){
    for(int i = 0; i < 52; i++){//보드 초기화
        fill(board[i], board[i]+52, 0);
        fill(vis[i], vis[i]+52, 0);
    }

    int n, m, k;
    cin >> m >> n >> k;// 입력 순서 열, 행, 배추 개수

    for(int i = 0; i < k; i++){
      int a, b;
      cin >> a >> b;
      board[b][a] = 1;

    }

    int output = 0;
    queue<pair<int,int>>Q;

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){

        if(board[i][j] == 1 && vis[i][j] == 0){
          Q.push({i,j});
          vis[i][j] = 1;
          output++;

          while(!Q.empty()){

            auto cur = Q.front();Q.pop();

            for(int dir = 0; dir < 4; dir++){
              int nx = cur.X + dx[dir];
              int ny = cur.Y + dy[dir];

              if(nx < 0 || nx >= n || ny < 0 || ny >=m)continue;
              if(vis[nx][ny]!=0 || board[nx][ny]!=1)continue;

              Q.push({nx, ny});
              vis[nx][ny] = 1;

            }

          }

        }

      }

    }

    cout << output << '\n';



  }


}
