#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, res;
    cin>>s;
    char mx = s[0];

    for(int i=1; i<s.size(); i++) {
        mx = max(mx, s[i]);
    }
    for(int i=0; i<s.size(); i++) {
        if(s[i]==mx) {
            res+=s[i];
        }
    }
    cout<<res<<endl;
    return 0;
}
