#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    vector<ll>vi;
    for(ll i=0; i<n; i++) {
        ll num;
        cin>>num;
        vi.push_back(num);
    }
    sort(vi.begin(), vi.end());
    ll diff, maxm, minm, cntm=0, cntx=0;
    diff = vi[n-1]-vi[0];
    minm = vi[0], maxm = vi[n-1];
    for(ll i=0; i<n; i++) {
        if(vi[i]==minm) {
            cntm++;
        } 
        if(vi[i]==maxm) {
            cntx++;
        }
    }
    cout<<diff<<" ";
    if(minm == maxm)  {
        cout<<(n*(n-1))/2<<endl;
    } else {
        cout<<cntm*cntx<<endl;
    }

    return 0;
}