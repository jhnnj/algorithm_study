#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){

        int arr[26] = {};
        string s1, s2;
        cin >> s1 >> s2;

        for(auto c:s1)arr[c-'a']++;
        for(auto c:s2)arr[c-'a']--;

        bool isPossible = true;

        for(int i:arr){
            if(i != 0)isPossible = false;

        }

        if(isPossible == true)cout << "Possible\n";
        else cout << "Impossible\n";

    }

}
