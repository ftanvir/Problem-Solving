#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, rmve=0;
    string s[50];
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>s[i];
    } 
    for(int i=0; i<n; i++) {
        if(s[i]== s[i+1]) {
            rmve++;
        }
        else {
            break;
        }
    }
    cout<<rmve<<endl;
    return 0;
}