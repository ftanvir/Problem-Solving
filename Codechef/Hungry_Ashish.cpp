#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int x, y, z;
        cin>>x>>y>>z;
        if(y<=x) {
            cout<<"PIZZA"<<endl;
        } else if(z<=x) {
            cout<<"BURGER"<<endl;
        } else {
            cout<<"NOTHING"<<endl;
        }
    }
    return 0;
}