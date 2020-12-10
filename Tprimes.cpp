#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n)
{
    if(n==1) {
        return false;
    }
    else {
        for(ll i=2; i*i<=n; i++) {
            if(i%n==0) {
            return true;
            }
        }
    }
    return false;
}

int main()
{
    ll t, n, num;
    cin>>t;
    while(t--) {
        cin>>num;
        n= sqrt(num);
        if(isPrime(n)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
