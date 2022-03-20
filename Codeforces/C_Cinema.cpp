#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve()
{
    ll scientistNumber, movieNumber;
    vector<ll> scientistIndex, audioIndex, subtitleIndex;
    unordered_map<ll, ll>mpl;
    
    cin>>scientistNumber;
    for(ll i=0; i<scientistNumber; i++) {
        ll num;
        cin>>num;
        mpl[num]++;
    }
    cin>>movieNumber;
    for(int i=0; i<movieNumber; i++) { 
        ll num;
        cin>>num;
        audioIndex.push_back(num);
    }
    ll ans=0,x=0,y=0;
    for(int i=0; i<movieNumber; i++) { 
        ll num;
        cin>>num;
        subtitleIndex.push_back(num);
    }

    for(int i=0; i<movieNumber; i++) {
        if(mpl[audioIndex[i]]>x) {
            ans = i+1;
            x = mpl[audioIndex[i]];
            y = mpl[subtitleIndex[i]];
        }
        else if(x==mpl[audioIndex[i]] && y<mpl[subtitleIndex[i]]) {
            ans = i+1;
            y = mpl[subtitleIndex[i]];
        }
    }
    if(ans==0){
        ans++;
    }
    cout<<ans<<endl;
    

}


int main()
{
    //int t;
    //cin>>t;
    //while(t--) {
        solve();
    //}
    return 0;
}