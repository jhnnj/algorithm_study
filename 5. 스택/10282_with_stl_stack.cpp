#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int>S;
    int n;
    cin >> n;

    while(n--){

        string a;
        cin >> a;
        if(a=="push"){
            int b;
            cin >> b;
            S.push(b);

        }
        else if(a=="pop"){
            if(S.empty())cout << -1 << "\n";
            else{
                cout << S.top() << "\n";
                S.pop();
            }
        }
        else if(a=="size") cout << S.size() << "\n";
        else if(a=="empty") cout << S.empty() << "\n";
        else if(a=="top"){
            if(S.empty()) cout << -1 << "\n";
            else cout << S.top() << "\n";

        }

    }

}
