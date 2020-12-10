#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[101];
    cin>>ch;
    int cnt =1,  len = strlen(ch);
    sort(ch, ch+len);
    for(int i=0; i<len; i++) {
        if(ch[i]!=ch[i+1]) {
            cnt++;
        }
    }
    if(cnt%2==0) {
        cout<<"IGNORE HIM!"<<endl;
    } else {
        cout<<"CHAT WITH HER!";
    }
    return 0;

}