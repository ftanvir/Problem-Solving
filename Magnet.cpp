#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, arr[100000], grp=0;
    cin>>n;
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        if(arr[i]!=arr[i+1]) {
            grp++;
        }
    }
    
    cout<<grp<<endl;
    
    return 0;
}