#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, target;
    int arr[10] = {};

    cin >> a;
    while(a > 0){
        arr[a%10]++;
        a = a/10;
    }

    arr[6] = (arr[6]+arr[9]+1)/2;
    target = arr[0];

    for(int i = 1; i < 9; i++)if(arr[i]> target) target = arr[i];

    cout << target;


}
