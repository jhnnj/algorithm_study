#include <bits/stdc++.h>

using namespace std;

int main(){


    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, j, k;

    int sum = 0;
    int arr[9];
    int arr_1[9];
    for(i = 0; i < 9; i++){

        cin >> arr[i];

    }

    for(i = 0; i < 9; i++){
        for(j = i+1; j < 9; j++){
            for(k = 0; k < 9; k++){

                if(k!=i && k!=j){
                    sum += arr[k];

                }

            }


            if(sum == 100){
                for(k = 0; k < 9;k++){
                    if(k!=i&&k!=j){
                        arr_1[k] = arr[k];

                    }
                    else{
                        arr_1[k] = 100;
                    }


                }

            }
            sum = 0;


        }


    }

    sort(arr_1, arr_1 + 9);

    for(i = 0; i < 7; i++){

        cout << arr_1[i] << "\n";
    }

}
