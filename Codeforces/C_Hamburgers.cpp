#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{   
    string ss;
    cin>>ss;
    ll nb, ns, nc, pb, ps, pc, money;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>money;
    int len = ss.size(), b=0, s=0, c=0;

    for(int i=0; i<len; i++) {
        if(ss[i]=='B') {
            b++;
        } else if(ss[i]=='S') {
            s++;
        } else {
            c++;
        }
    }

    ll l=0, r=1e15, ans;
    while(l<=r) {
        ll mid;
        mid = l + (r-l)/2;
        ll needB = max(0ll, ((mid*b)-nb));
        ll needS = max(0ll, (mid*s)- ns);
        ll needC = max(0ll, (mid*c)-nc);

        ll cost;
        cost = (needB*pb) + (needS*ps) + (needC*pc);

        if(cost<=money) {
            l = mid+1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }
    cout<<ans<<endl;

    return 0;
}