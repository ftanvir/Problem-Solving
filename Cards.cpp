#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string ltr;
    cin>>n;
    cin>>ltr;
    for(int i=0 ; i<n; i++) {
        if(ltr == 'one') {
            cout<<"1" <<" ";
        }
        else if(ltr == 'zero') {
            cout<<"0"<<" "<<endl;
        }
    }
}