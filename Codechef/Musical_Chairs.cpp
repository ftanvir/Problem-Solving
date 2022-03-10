#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        n = n-1;
        int num=0;
        for(int i= 1; i*i<=n; i++) {
            if(n%i==0) {
                num++;
                if(i*i!=n) num++;
            }
        }

        cout<<num<<endl;
    }

    return 0;
}