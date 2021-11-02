/*
Atcoder Problem 
Problem Link: https://atcoder.jp/contests/abc225/tasks/abc225_a
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    set<char>ch;
    int len = s.size();
    for(int i=0; i<len; i++) {
        ch.insert(s[i]);
    }
    int distinct = ch.size();
    if(distinct == 1 ) {
        cout<<"1"<<endl;
    } else if(distinct == 2) {
        cout<<"3"<<endl;
    } else {
        cout<<"6"<<endl;
    }


    return 0;
}