
// Authored by : OceanShape
// Co-authored by : -
// http://boj.kr/572b87aed4eb43d9b9084797f5fbace2
#include <bits/stdc++.h>
using namespace std;

int K, ans = 0;
stack<int> s;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> K;
  while(K--){
    int n;
    cin >> n;
    if(n == 0) s.pop(); // 0�� �Է��� ���, ���� �ֽŰ�(s.top()) ����
    else s.push(n);     // 0 �̿��� ���� �Է��� ���, ���ÿ� �߰�
  }

  // ���ÿ� �׿� �ִ� ��� ���� ������
  while(!s.empty()){
    ans += s.top();
    s.pop();
    cout << s.empty() << '\n';
  }
  cout << ans;
}
