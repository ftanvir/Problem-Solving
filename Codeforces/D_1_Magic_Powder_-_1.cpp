#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k, sumneed=0, sumhave=0;
    vector<int>need, have;
    cin>>n>>k;
    for(int i=0; i<n; i++) {
        int num;
        cin>>num;
        need.push_back(num);
    }
    for(int i=0; i<n; i++) {
        int num;
        cin>>num;
        have.push_back(num);
    }
    ll l =0, r = 2000, mid, ans=-1;
    while(l<=r) {
        mid = l + (r-l)/2;
        int get=0;
        for(int i=0; i<n; i++) {
            int nuu;
            nuu = (mid*need[i] - have[i]);
            get = get + max(0, nuu);
        }

        if(get>k) {
            r = mid-1;
        } else {
            ans = mid;
            l = mid+1;
        }

    }
    cout<<ans<<endl;

    return 0;
}