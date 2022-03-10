#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a, b;
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            a.push_back(num);
        }
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            b.push_back(num);
        }
        int ans = 0, mul;
        for(int i=0; i<n; i++) {
            if(a[i]<=b[i]) {
                swap(a[i],b[i]);
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ans = a[n-1] * b[n-1];
        cout<<ans<<endl;
    }
    return 0;
}