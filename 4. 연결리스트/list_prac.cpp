#include <bits/stdc++.h>

using namespace std;

int main(){

    list<int>L{12,50, 30, 11};

    for(auto i: L)cout << i <<' ';
    cout <<'\n';

    auto cursor = L.begin();
    cursor++;
    cursor = L.erase(cursor);
    for(auto i: L)cout << i <<' ';
    cout <<'\n';
    cout <<*cursor;


    /*
    L.insert(cursor, 15);
    for(auto i: L)cout << i <<' ';
    cout <<'\n';
    cout << *cursor;

    /*
    cursor = L.erase(cursor);
    for(auto i: L)cout << i <<' ';
    cout <<'\n';
    */



}
