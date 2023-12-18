#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void func1(vector<int> v){
    v[10] = 7;
}

bool cmp1 (vector<int> v1, vector<int> v2, int idx){
    return v1[idx] > v2[idx];
}

bool cmp2 (vector<int>& v1, vector<int>& v2, int idx){
    return v1[idx] > v2[idx];
}

void blank(){

    string s;
    cout << "input: ";
    getline(cin, s);
    cout << s;

}
int main(){

    ios::sync_with_stdio(0);
    cin:tie(0);
    vector<int> v(100);
    func1(v);

    cout << v[10];

    blank();


}
