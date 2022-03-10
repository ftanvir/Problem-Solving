#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;
        string ans = "YES";
        for(int i = 0 ; i<n; i++) {
            if(s1[i] =='1' && s2[i]=='1') {
                ans = "NO";
                break;
            }
        }
        cout<<ans<<endl;
        

    }

    return 0;
}