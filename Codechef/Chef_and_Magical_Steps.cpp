#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int isPrime(ll n) {
    if(n==1) return 0;

    for(ll i=0; i*i<=n; i++) {
        if(n%i==0)
        return 0;
    }
    return 1;
}


int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll x, y;
        cin>>x>>y;
        ll steps =0;
         
        while(1) {
            if(isPrime(x+1)==1) {
                x+=2;
                steps++;
            } else {
                x+=1;
                steps++;
            } 

            if(x>y) {
                break;
            }
        }
        cout<<steps<<endl;
    }

    return 0;
}