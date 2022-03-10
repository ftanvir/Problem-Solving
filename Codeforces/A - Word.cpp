#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int low=0, high=0;
    cin>>s;
    for(int i=0; i<s.size(); i++) {
        if(isupper(s[i])) {
            high+=1;
        } else {
            low+=1;
        }
    }
    if(high>low) {
        for(int i=0; i<s.size(); i++) {
            putchar(toupper(s[i]));
        }
    } else {
        for(int i=0; i<s.size(); i++) {
            putchar(tolower(s[i]));
        }
    }

    return 0;
}