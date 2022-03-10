#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, ones=0, zeros=0, poss=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++) {
            if(s[i]=='0') {
                zeros+=1;
            } else {
                ones+=1;
            }
        }
        if(zeros<2 || ones<2) {
            cout<<"0"<<endl;
        } else {
            poss = min(zeros, ones);
            cout<<poss-1<<endl;
        }
        
    }
    return 0;
}