#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll x, y, z;
        cin>>x>>y>>z;
        ll planebus = x+y;
        if(planebus> z) {
            cout<<"TRAIN"<<endl;
        } else if (z>planebus) {
            cout<<"PLANEBUS"<<endl;
        } else {
            cout<<"EQUAL"<<endl;
        }
    }

    return 0;
}