#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, xStart, yStart;
        cin>>n>>xStart>>yStart;
        int total = 0;
        total = xStart+yStart;
        if(total%2) {
            cout<<"1"<<endl;
        } else {
            cout<<"0"<<endl;
        }
    }
    return 0;
}