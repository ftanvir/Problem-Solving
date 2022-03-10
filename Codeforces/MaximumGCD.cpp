#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n, gc=0, kl=0;
    cin>>t;
    while(t--) {
        cin>>n;
        for(ll i=1; i<=n; i++) {
            if(i*2<=n) {
                gc= __gcd(i, i*2);
                if(gc>kl) {
                    kl= gc;
                }
            } else {
                break;
            }
        }
        cout<<kl<<endl;
        kl=0;
        gc=0;
    }
}