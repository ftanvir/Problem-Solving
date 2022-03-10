#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, flag = 0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++) {
            if((s[i]=='R' && s[i+1]=='R') || (s[i]=='L' && s[i+1]=='L')) {
                flag = 1;
                break;
            }
        }
        if(flag == 1) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}