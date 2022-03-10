#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() 
{
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll arr[n+3];
        for(int i=1; i<=n; i++) {
            cin>>arr[i];
        }
        ll ans = arr[1]-1;
        ll ind = ans;
        for(int i=2; i<=n; i++) {
            if(ind + i <arr[i]) {
                ll x = arr[i] - (ind + i);
                ind +=x;
                ans+=x;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}