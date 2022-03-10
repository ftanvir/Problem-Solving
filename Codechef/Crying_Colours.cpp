#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[4][4];
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cin>>arr[i][j];
            }
        }
        int tri1 =0, tri2=0;
        tri1 = arr[0][2]+arr[0][1]+arr[1][2];
        tri2 = arr[1][0]+arr[2][1]+arr[2][0];
        if(arr[0][0]==n && arr[1][1]==n && arr[2][2]==n) {
            cout<<"0"<<endl;
        } else {
            cout<<max(tri1, tri2)<<endl;
        }

    }

    return 0;
}