#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[1001];
    cin>>n;
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int cnt=0;
    for(int i = 0; i<=n-2; i++) {
        if((arr[i+1]-arr[i]) > 1) {
            int diff = arr[i+1] - arr[i];
            cnt += (diff-1); 
        }
    }
    cout<<cnt<<endl;
    return 0;
}