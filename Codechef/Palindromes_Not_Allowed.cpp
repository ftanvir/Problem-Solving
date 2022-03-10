#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int charval = 0;
        for(int i=0; i<n; i++) {
            if(charval==26){
                charval=0;
            }
            cout<<char(97+charval);
            charval++;
        }
        cout<<endl;
    }
    return 0;
}