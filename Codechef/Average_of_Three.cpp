#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        int targetNum = 3*n;
        cout<<"1"<<" "<<n<<" "<<targetNum-(1+n)<<endl;
    }
    return 0;
}