#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v(100);
    v[20] = 10;
    v[60] = -4;

    cout << v[20];




}
// �ð����⵵�� O(N)�̴�. ���͸� �����ؿ��� ����.
bool cmp1 (vector<int> v1, vector<int> v2, int idx){
    return v1 [idx] > v2 [idx];
}

// ���� �ּҸ� �����ڸ� Ȱ���Ͽ� �������� ������ ������ �ѹ��� ����.
bool cmp2 (vector<int>&v1, vector<int>&v2, int idx){
    return v1[idx] > v2 [idx];
}
