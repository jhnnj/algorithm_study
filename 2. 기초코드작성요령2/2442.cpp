#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
   int n;
   cin >> n;

   for(int a = 0; a < n; a++){
        int b = 0;
        for(; b < n-1-a; b++)cout << " ";
        for(; b < n-1; b++)cout << "*";

        for(int c = 0; c < a+1; c++)cout << "*";

        cout << "\n";



   }


}
