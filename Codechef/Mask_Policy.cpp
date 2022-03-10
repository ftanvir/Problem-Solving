#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, a;
        cin>>n>>a;
        int req=0, uninf=0;
        uninf = n-a;
        req = min(uninf, a);
        cout<<req<<endl;
    }
    return 0;
}