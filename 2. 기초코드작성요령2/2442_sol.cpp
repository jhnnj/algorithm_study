#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    for (int a = 1; a <= n; a++){
        for(int b = 1; b <= n-a; b++) cout << " ";
        for(int b = 1; b <= 2*a - 1; b++) cout << "*";


        cout << "\n";
    }



}
