#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int maxm = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i]>maxm) {
            maxm = arr[i];
        }
    }
    int trrsr = 0;
    for(int i=0; i<n; i++) {
        if(arr[i]<maxm) {
            int diff = maxm - arr[i];
            trrsr+=diff;
        }
    }
    cout<<trrsr<<endl;
    return 0;
}