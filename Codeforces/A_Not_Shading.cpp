#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, m, r, c;
        cin>>n>>m>>r>>c;
        string s[n+3];
        for(int i=0; i<n; i++) {
            cin>>s[i];
        }
        int ans=0, cnt1=0, cnt2=0;
        for(int i=0;i<n;i++) {
            for(int j=0; j<m; j++) {
                if(s[i][j]=='B') {
                    ans = 1;
                    break;
                }
            }
        }
        for(int i=0; i<n; i++) {
            if(s[i][c-1]=='B') {
                cnt1=1;
                break;
            }
        }
        for(int i=0; i<m; i++) {
            if(s[r-1][i]=='B') {
                cnt2 = 1;
                break;
            }
        }

        if(ans==0) {
            cout<<"-1"<<endl;
        } else if(s[r-1][c-1]=='B') {
            cout<<"0"<<endl;
        } else if(cnt1==1 || cnt2==1) {
            cout<<"1"<<endl;
        } else {
            cout<<"2"<<endl;
        }
    }
    return 0;
}