#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, mul = 1;
    int arr[10] = {};

    for(int i = 0; i < 3; i++){
        cin >> a;
        mul *= a;
    }

    while(mul > 0){
        arr[mul%10]++;
        mul /= 10;

    }

    for(int i = 0; i < 10; i++)cout << arr[i] << "\n";



}
