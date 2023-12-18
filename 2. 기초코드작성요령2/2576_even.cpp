#include <bits/stdc++.h>

using namespace std;
int main(){

    int i, num;
    int sum = 0;
    int _min = 100;


    ios::sync_with_stdio(0);
    cin.tie(0);

    for(i=0;i<7;i++){
        cin >> num;
        if(num%2==1){

            sum += num;
            if(num<_min){
                _min = num;
            }
        }
    }

    if(_min != 100){
        cout << sum << "\n" << _min;
    }
    else cout << -1;



}
