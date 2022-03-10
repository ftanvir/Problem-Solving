#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, c;
    cin>>a>>b>>c;
    a+=c;
    b+=c;
    if(a==b) {
        cout<<a+b<<endl;
    } else {
        cout<<min(a,b)+min(a,b)+1<<endl;
        
    }
    return 0;
}