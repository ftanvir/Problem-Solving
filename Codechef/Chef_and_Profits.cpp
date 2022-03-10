#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, y, z;
        cin>>n>>y>>z;
        int totalCost =0, sale = 0, profit =0;
        totalCost = n*y;
        sale = n*z; 
        profit = sale - totalCost;
        cout<<profit<<endl;
    }
    return 0;
}