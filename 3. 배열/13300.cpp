#include <bits/stdc++.h>

using namespace std;

int input[2][7];
int sum[2][7];

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, a, b, result = 0;

    cin >> n >> k;

    for(int i = 0; i < n; i++){

        cin >> a >> b;
        input[a][b]++;

    }

    for(int i = 0; i < 2; i++){
        for(int j = 1; j < 7; j++){


            sum[i][j] = (input[i][j] + k -1)/k;
            result += sum[i][j];



        }
    }
    cout << result;



}
