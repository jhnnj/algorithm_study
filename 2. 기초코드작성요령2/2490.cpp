#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    int sum = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> a;
            sum += a;

        }
        if(sum == 0) cout << "D";
        else if(sum == 1) cout << "C";
        else if(sum == 2) cout << "B";
        else if(sum == 3) cout << "A";
        else cout << "E";

        cout << "\n";
        sum = 0;
    }




}
