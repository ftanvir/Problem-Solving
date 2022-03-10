#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int grow = 1;
        for(int i=0; i<n; i++) {
            if(arr[i]==0 && arr[i-1]==0) {
                grow = -1;
                break;
            } else if(i>0 && arr[i]==1 && arr[i-1]==1) {
                grow+=5;
            } else if(arr[i]==1) {
                grow+=1;
            }
        }
        cout<<grow<<endl;
    }
    return 0;
}