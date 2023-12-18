#include <bits/stdc++.h>
using namespace std;

int num[21];

void reverse(int a, int b){

    for(int i = 0; i < (b-a+1)/2; i++){
        swap(num[a+i], num[a-i]);

    }

}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;

    for(int i = 1; i <= 20; i++){
        num[i] = i;
    }

    for(int i = 1; i <= 10; i++){

        cin >> a >> b;

        reverse(a, b);

    }
    for(int i = 1; i <= 20; i++){
        cout << num[i] << " ";
    }
}
