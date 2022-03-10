#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll a, b, c, val;
        cin>>a>>b>>c;
        val = abs((a+c)- 2*b);
        if(val%3==0) {
            cout<<"0"<<endl;
        } else {
            cout<<"1"<<endl;
        }
    }

    return 0;
}