#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int atoz[27] = {0,};
    string s;

    cin >> s;

    for(int i = 0; i < s.length(); i++) atoz[s[i]-96]++;

    for(int i = 1; i <=26; i++)cout << atoz[i] << " ";
}
