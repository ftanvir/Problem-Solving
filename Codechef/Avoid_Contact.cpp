#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int x, y;
        cin>>x>>y;
        int diff;
        diff = x-y;
        if(diff==x) {
            cout<<x<<endl;
        } else if(diff==0) {
            cout<<(y*2)-1<<endl;
        } else {
            cout<<diff+(y*2)<<endl;
        }
    }
    return 0;
}