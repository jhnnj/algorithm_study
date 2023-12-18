#include <bits/stdc++.h>
using namespace std;

string res = "DCBAE";
int input, sum;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 0; i < 3; i++){
        sum = 0;
        for(int j = 0; j < 4; j++){
            cin >> input;
            sum += input;
        }
        cout << res[sum] << "\n";
    }


}
