#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll p, a, b, c;
        cin>>p>>a>>b>>c;
        if(p%a==0 || p%b==0 || p%c==0) {
            cout<<"0"<<endl;
        } else {
            cout<<min({(a-(p%a)), (b-(p%b)), (c-p%c)})<<endl;
        }
        
    }

    return 0;
}
