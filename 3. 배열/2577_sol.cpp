#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;


    cin >> a >> b >> c;
    int mul = a * b * c;

    int arr[10] = {};

    while(mul > 0){

        arr[mul%10]++;
        mul = mul/10;
    }

    for(int i = 0; i < 10; i++) cout << arr[i] << "\n";


}
