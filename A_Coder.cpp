#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2) {
        cout<<(n*n/2) + 1<<endl;
    } else {
        cout<<(n*n)/2<<endl;
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i%2) {
                if(j%2) {
                    cout<<"C";
                } else {
                    cout<<".";
                }
            } else {
                if(j%2==0) cout<<"C";
                else cout<<".";
            }
        } cout<<endl;
    }

    return 0;
}