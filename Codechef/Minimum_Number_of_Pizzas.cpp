#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll n, k, pizza1=0, pizza2=0;
        cin>>n>>k;
        if(k%n==0) {
            cout<<"1"<<endl;
        } else {
            pizza1 = __gcd(n,k);
            pizza2 = (n*k)/pizza1;
            cout<<pizza2/k<<endl;
        }
    }
    return 0;
}