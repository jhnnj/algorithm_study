#include <bits/stdc++.h>

using namespace std;

int main(){

    list<int>L;
    list<int>::iterator it;

    for(int i = 1; i <=5; i++)L.push_back(i); // 1,2,3,4,5

    it = L.begin();

    ++it;

    L.insert(it, 10); //1, 10, 2(it),3,4,5
    cout << *it << "\n"; //2

    L.insert(it, 2, 20); // 1,10, 20, 20, 2(it), 3,4,5
    cout << *it << "\n"; //2

    it--;
    cout << *it << "\n"; //20

    it = L.erase(it);
    for(int i:L)cout << i << " ";
    cout << "\n";
    cout << *it << "\n"; //2

}
