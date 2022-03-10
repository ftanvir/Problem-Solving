#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    unordered_map<char, int>mpChar;
    for(auto ch:s1) {
        mpChar[ch]++;
    }
    for(auto ch:s2) {
        mpChar[ch]++;
    }
    for(auto ch:s3) {
        mpChar[ch]--;
    }
    for(auto it:mpChar) {
        if(it.second != 0) {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}