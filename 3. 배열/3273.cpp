#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[100001] = {};
    int n, x, result = 0;

    cin >> n;

    for(int i = 0; i < n; i++)cin >> arr[i];

    cin >> x;

    int occur[2000001] = {};

    for(int i = 0; i < n; i++){
        if(x > arr[i] && occur[x-arr[i]])result++;
        occur[arr[i]]++;
    }

    cout << result;

}
