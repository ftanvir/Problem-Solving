#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t, a, b, multi;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        multi = (a*b)+(a*b);
        if(a>b) {
            for (int i=a; i<a*2 ;i++) {
                if((i*i) >= multi) {
                    cout<<i*i<<endl;
                    break;
                }
            }
        }
        else if(b>a) {
            for (int i=b; i<b*2 ;i++) {
                if((i*i) >= multi) {
                    cout<<i*i<<endl;
                    break;
                }
            }
        }
        else {
            cout<<(a+a)*(a+a)<<endl;
            
        }
        multi =0;
    }
    return 0;
}