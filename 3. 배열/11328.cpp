#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);


    int n;

    cin >> n;

    for(int i = 0; i < n; i++){

        int alp[27] ={}, alp2[27] = {};
        bool flag = 0;
        string s1, s2;
        cin >> s1 >> s2;

        for(int j = 0; j < s1.length(); j++){
            alp[s1[j]-'a']++;
            alp2[s2[j]-'a']++;

        }

        for(int j = 0; j < 27; j++){
            if(alp[j]!=alp2[j]){
                cout << "Impossible" <<"\n";
                flag = 1;
                break;

            }


        }
        if(flag != 1)cout <<"Possible"<<"\n";

    }

}
