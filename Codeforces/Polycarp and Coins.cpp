#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll n, c1=0, c2=0;
        cin>>n;
        if(n%3==0) {
            c1 = n/3;
            c2= n/3;
        } else {
            c1= n/3;
            c2 = n-c1; 
            if(c2%2==0) {
                c2 = c2/2;
            } else {
                c2 = c2/2 +1;
            }
        }
        if(c1+2*c2 == n) {
            cout<<c1<<" "<<c2<<endl;
        } else {
            cout<<c2<<" "<<c1<<endl;
        }
    }
    return 0;
}