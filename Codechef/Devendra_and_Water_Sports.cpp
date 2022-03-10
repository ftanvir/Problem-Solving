#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int z, y, a, b, c;
        cin>>z>>y>>a>>b>>c;
        int diff, sum;
        diff = z-y;
        sum = a+b+c;
        if(diff>=sum) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}