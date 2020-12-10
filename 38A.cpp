#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0, diff, n, a, b, d[101];
    cin>>n;
    for(int i=1; i<n; i++) {
        cin>>d[i];
    }
    cin>>a>>b;
    for(int i=a; i<b; i++) {
        ans+=d[i];
    }
    cout<<ans<<endl;

    return 0;

}
