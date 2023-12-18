#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    int tmp;
    int arr[20];
    for(int i = 0; i < 20; i++){
        arr[i] = i+1;
    }

    for(int i = 0; i < 10; i++){

        cin >> a >> b;

        a -= 1;
        b -=1;

        for(int i = a; i <= a+int((b-a)/2); i++){
            tmp = arr[i];
            arr[i] = arr[b+a-i];
            arr[b+a-i] = tmp;

        }

    }

    for(int i = 0; i < 20; i++)cout << arr[i] << " ";
}
