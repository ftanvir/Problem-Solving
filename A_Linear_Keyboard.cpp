#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        string a,s ; cin>>a>>s;
        int sum=0;
        for(int i=0;i<s.size()-1;i++)
        sum+=abs(int((a.find(s[i])-a.find(s[i+1]))));
        cout<<sum<<endl;
    }
    return 0;
}