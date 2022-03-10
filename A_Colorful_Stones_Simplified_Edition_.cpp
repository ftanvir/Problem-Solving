#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin>>s>>t;
    int len = t.size(), step =1;
    for(int i=0, j=0; i<len; i++) {
        if(t[i]==s[j]) {
            step++;
            j++;
        }
    }
    cout<<step<<endl;
    
    return 0;
}