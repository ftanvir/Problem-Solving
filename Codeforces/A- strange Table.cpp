#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll n, m, x;
        cin>>n>>m>>x;
        x--;
        ll col = x/n;
        ll ro =  x%n;
        cout<<ro*m+col+1<<endl;
    }

    return 0;
}