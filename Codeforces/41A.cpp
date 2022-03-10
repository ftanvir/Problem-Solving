#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ch, hh;
    cin>>ch>>hh;
    reverse(hh.begin(), hh.end());
    if(ch==hh) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}
