#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll n, l , r, k;
        vector<int>vi;
        cin>>n>>l>>r>>k;
        for(ll i=0; i<n; i++) {
            int num; 
            cin>>num;
            if(num>=l && num<=r) {
                vi.push_back(num);
            }
        }
        ll len = vi.size(), count = 0, ans = 0;
        if(len ==0) {
            cout<<"0"<<endl;
        } else {
            sort(vi.begin(), vi.end());
            for(int i=0; i<len; i++) {
                ans+=vi[i];
                if(ans<=k) {
                    count++; 
                } 
            }
            cout<<count<<endl;
        }
        
    }

    return 0;
}