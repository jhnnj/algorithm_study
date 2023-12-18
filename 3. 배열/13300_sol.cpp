#include <bits/stdc++.h>

using namespace std;

int input[2][7];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        input[a][b]++;

    }
    int result = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 1; j < 7; j++){
            result += input[i][j]/k;
            if(input[i][j]%k)result++;
        }

    }
    cout << result;
}
