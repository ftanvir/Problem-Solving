#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, maxm=0, minm=0, diff=0;
        cin>>n;
        int arr[10001];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        maxm = arr[n-1];
        minm = arr[0];
        diff = maxm-minm;
        cout<<diff<<endl;

    }
    return 0;
}