#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, l1, r1, l2, r2, a, b;
    cin>>q;
    while(q--) {
        cin>>l1>>r1>>l2>>r2;
        cout<<l1<<" ";
        if(l1==l2) cout<<r2<<endl;
        else cout<<l2<<endl;
    }
    return 0;
}
