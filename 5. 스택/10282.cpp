#include <bits/stdc++.h>

using namespace std;

const int MX = 100005;
int _stack[MX];
int pos = 0;

void push(int x){
    _stack[pos++] = x;
}

int pop(){
    if(pos==0) return -1;
    else return _stack[--pos];
}

int size(){
    return pos;
}

bool empty(){
    if(pos==0) return 1;
    else return 0;
}

int top(){
    if(pos==0) return -1;
    else return _stack[pos-1];
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while(n--){
        string a;
        cin >>a;
        if(a=="push"){
            int b;
            cin >> b;
            push(b);
        }
        else if(a=="pop") cout << pop() << '\n';
        else if(a=="size") cout << size() << '\n';
        else if(a=="empty") cout << empty() << '\n';
        else if(a=="top") cout << top() << '\n';

    }
}
