#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v(100);
    v[20] = 10;
    v[60] = -4;

    cout << v[20];




}
// 시간복잡도가 O(N)이다. 벡터를 복사해오기 때문.
bool cmp1 (vector<int> v1, vector<int> v2, int idx){
    return v1 [idx] > v2 [idx];
}

// 원본 주소를 참조자를 활용하여 가져오기 때문에 연산을 한번만 진행.
bool cmp2 (vector<int>&v1, vector<int>&v2, int idx){
    return v1[idx] > v2 [idx];
}
