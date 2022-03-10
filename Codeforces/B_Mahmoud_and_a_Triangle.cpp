#include <bits/stdc++.h>
using namespace std;
typedef long ll;
int main()
{
    ll n;
    cin>>n;
    vector <ll> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++) {
        if(v[i]+v[i+1]>v[i+2] && i+3<=n) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}