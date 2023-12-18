#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int> S;

    S.push(10);
    S.push(20);
    S.push(30);
    // 10, 20. 30

    cout << S.size() << '\n';//3

    if(S.empty())cout << "S is empty\n";
    else cout <<"S is not empty\n"; // S is not empty

    S.pop();
    cout << S.top() << "\n"; // 20

    S.pop();
    cout << S.top() << '\n'; // 10

    S.pop();
    if(S.empty())cout << "S is empty\n"; // S is empty
    //cout << S.top() << '\n'; // run time error


    cout << S.empty() << '\n';
    S.push(111);
    cout << S.empty() << '\n';
}
