#include <bits/stdc++.h>

void swap(arr)


int main(){

    int arr[10] = {2,33,13,69,19,32,11,56,11,29};

    int n = 10;

    for(int i = n-1; i > 0; i++){
        int mxidx = 0;
        for(int j = 1;j <= i; j++){

            if(arr[mxidx] < arr[j]) mxidx = j;
        }
    }



}
