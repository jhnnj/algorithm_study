#include<bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    int mean, median;
    int sum = 0;
    int arr[5];

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        sum += arr[i];


    }
    sort(arr, arr+5);
    median = arr[2];
    mean = sum/5;

    cout << mean << "\n" << median;





}
