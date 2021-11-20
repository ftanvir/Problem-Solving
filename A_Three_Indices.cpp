#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int v[n];
        for(int i=0; i<n; i++)  {
            cin>>v[i];
        }
        int flag =0;
        for(int i=1; i<n-1; i++) {
            if((v[i-1]<v[i]) && (v[i]>v[i+1])) {
                flag = 1;
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                break;
            }
        }
        if(flag == 0) {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}