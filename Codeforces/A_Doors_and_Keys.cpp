#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        if(s.find('R')<s.find('r') || s.find('G')<s.find('g') || s.find('B')<s.find('b')) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}