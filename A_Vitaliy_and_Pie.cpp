#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans=0;
    cin>>n;
    string s;
    cin>>s;
    map<char, int> m;
    for(int i=0; i<s.size(); i++) {
        if(islower(s[i])) {
            m[s[i]]++;
        } else if(m[s[i]+32]>0) {
            m[s[i]+32]--;
        } else {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}