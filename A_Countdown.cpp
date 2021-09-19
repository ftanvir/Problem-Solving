#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long ans = 0, swaps = 0;
        for(long long i=0; i<n; i++) {
            ans += (s[i]-'0');
            if(s[i]!='0' && i<n-1) {
                ans++;
            }
        }
        cout<<ans<<endl;
        
    }

    return 0;
}