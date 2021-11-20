#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll m, n;
        cin>>m>>n;
        ll ans =0, multip = m*n;
        if(multip%3==0) {
            cout<<(n*m)/3<<endl;
        } else {
            cout<<((n*m)/3)+1<<endl;
        }

    }

    return 0;
}