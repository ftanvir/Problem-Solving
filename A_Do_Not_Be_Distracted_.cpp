#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char, int> mpp;
        int tmp = 1;
        for(int it=0; it<n; it++) {
            mpp[s[it]]++;
            if(mpp[s[it]]>1 && s[it]!=s[it-1]) {
                tmp = 0; 
                break;
            }
        }
        if(tmp) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}