#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;
        int count =0;
        for(int i = n-1; i>=0; i--) {
            if(s2[i]>s1[i]) {
                count = i+1;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}