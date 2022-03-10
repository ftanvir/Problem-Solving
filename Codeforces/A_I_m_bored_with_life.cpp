#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fact(ll n) {
    if(n>1) {
        return n*fact(n-1);
    } else {
        return 1;
    }
}

int main()
{
    ll a, b;
    cin>>a>>b;
    ll ans = min(a, b);
    ll hell;
    hell = fact(ans);
    cout<<hell<<endl;
    return 0;
}