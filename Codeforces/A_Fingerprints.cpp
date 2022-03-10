#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, num;
    cin>>x>>y;
    int arr1[11], ans[11];
    for(int i=0; i<x; i++) {
        cin>>arr1[i];
    }
    for(int i=0; i<y; i++) {
        cin>>num;
        ans[num]=1;
    }
    for(int i=0; i<x; i++) {
        if(ans[arr1[i]]==1) {
            cout<<arr1[i]<<" ";
        }
    }
    
    return 0;
}