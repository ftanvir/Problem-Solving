#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a, b, c, p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        int total, total2, total3;
        total = p+q+r;
        total2 = a+b+c;
        double req;
        req = total/2.0;
        if(total2>req) {
            cout<<"YES"<<endl;
            continue;
        }
        int diff1, diff2, diff3;
        diff1 = p-a, diff2 = q-b, diff3 = r-c;
        int maxm;
        maxm = max(diff1,max(diff2,diff3));
        total3 = total2 + maxm;
        if(total3>req) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        

        
    }
    return 0;
}