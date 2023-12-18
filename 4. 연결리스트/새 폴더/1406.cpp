#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    int n;
    cin >> n;

    list<char>L;
    for(auto c:s)L.push_back(c);

    auto cursor = L.end();

    while(n--){

        char op;
        cin >> op;

        if(op == 'L' && cursor != L.begin())cursor--;

        else if(op == 'D' && cursor != L.end())cursor++;

        else if(op == 'B' && cursor != L.begin()){
            cursor--;
            cursor = L.erase(cursor);
        }
        else if(op == 'P'){
            char add;
            cin >> add;
            L.insert(cursor, add);

        }


    }

    for(auto i:L) cout << i;



}
