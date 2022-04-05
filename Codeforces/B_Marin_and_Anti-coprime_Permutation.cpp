#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 998244353


ll fact(ll n) {
    ll ans = 1;
    for(ll i=1; i<=n ;i++) {
        ans = (ans*i) %mod;
    }

    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        if(n&1) cout<<"0"<<endl;
        else {
            ll odd, even;
            odd = fact(n/2);
            even = fact(n/2);
            ll ans;
            ans = (odd*even) %mod;
            cout<<ans<<endl;
        }
    }
    return 0;
}