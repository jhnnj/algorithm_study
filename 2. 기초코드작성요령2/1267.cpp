#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, input;
    int sumM = 0, sumY = 0;

    cin >> n;
    for(int i = 0; i < n; i++){

        cin >> input;
        sumY += (10 + (input/30)*10);
        sumM += (15 + (input/60)*15);

    }

    if(sumM == sumY) cout << "Y " << "M " << sumM;
    else if(sumM < sumY) cout << "M " << sumM;
    else cout << "Y " << sumY;
}
