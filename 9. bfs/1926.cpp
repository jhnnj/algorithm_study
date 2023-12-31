#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int board[502][502];
bool vis[502][502];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> board[i][j];
    }

  }


  int num = 0, _max = 0;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(board[i][j] == 0 || vis[i][j] == 1)continue;
      num++; // 그림 갯수 증가
      queue<pair<int,int>>Q;
      Q.push({i,j});
      vis[i][j] = 1;
      int _size = 0; //그림의 크기

      while(!Q.empty()){
        pair<int,int>cur = Q.front();
        Q.pop();
        _size++;

        for(int dir = 0; dir < 4; dir++){
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];

          if(nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
          if(vis[nx][ny] || board[nx][ny] != 1)continue;

          vis[nx][ny] = 1;

          Q.push({nx, ny});
        }

      }
      _max = max(_max, _size);
    }


  }

  cout << num << "\n" << _max;

}
