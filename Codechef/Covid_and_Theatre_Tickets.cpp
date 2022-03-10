#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        int row, col;
        row = (n+1)/2;
        col = (m+1)/2;
        cout<<row*col<<endl;
    }
    return 0;
}