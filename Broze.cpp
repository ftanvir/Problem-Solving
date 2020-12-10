#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    getline(cin, ch);
    int len = ch.size();
    for(int i=0; i<len; i++) {
        if(ch[i]=='.') {
            cout<<"0";
        } if (ch[i]== '-' && ch[i+1]=='.') {
            cout<<"1";
            ++i;
        } if(ch[i]=='-' && ch[i+1]=='-') {
            cout<<"2";
            i++;
        }
    } cout<<endl;

    return 0;
}