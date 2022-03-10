#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        long double ans, hell ;
        ans = 0.143*n;
        hell = pow(ans, n);
        ll flr = floor(hell);
        if(hell-flr < 0.5) {
            cout<<flr<<endl;
        } else {
            cout<<ceil(hell)<<endl;
        }
    }
    return 0;
}