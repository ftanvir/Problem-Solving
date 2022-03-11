#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, mx=-1;
        cin>>n;
        vector<int>vi;
        set<int>si;
        for(int i=0;i<n; i++) {
            int num;
            cin>>num;
            mx = max(mx, num);
            vi.push_back(num);
            si.insert(num);
        }
        //cout<<"Max "<<mx<<endl;
        int ans;
        if(si.size()==1) {
            ans=-1;
            cout<<ans<<endl;
        } else {
            
            for(int i=0; i<n; i++) {
                if(vi[i]==mx) {
                    if(i>0 && vi[i-1]!=mx) {
                        ans = i+1;
                    }
                    if(i<n-1 && vi[i+1]!=mx) {
                        ans = i+1;
                    }
                }
            }
            cout<<ans<<endl;
        }
        
        
    }
    return 0;
}