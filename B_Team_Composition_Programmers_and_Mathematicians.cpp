#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll a, b, total =0, minm, ans =0;
        cin>>a>>b;
        total = floor((a+b)/4);
        minm = min(a, b);
        ans = min(total, minm);
        cout<<ans<<endl;
    }
    return 0;
}