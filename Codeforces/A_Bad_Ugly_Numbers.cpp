#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n==1) {
            cout<<"-1"<<endl;
            continue;
        }
        cout<<"2";
        
        for(int i=0; i<n-1; i++) {
            cout<<"7";
        }cout<<endl;
    }
    return 0;
}