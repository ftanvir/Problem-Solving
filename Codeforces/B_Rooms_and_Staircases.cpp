#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, idxFront=0, idxBack=0;
    cin>>n;
    string s;
    cin>>s;
    if(s.find('1')==-1) {
        cout<<n<<endl;
    } else {
        for(int i=0; i<n; i++) {
            if(s[i]=='1') {
                idxFront = i+1;
            }
        }
        for(int i=n-1; i>=0; i--) {
            if(s[i]=='1') {
                idxBack = n - i;
            }
        }
        int maximum;
        maximum = max(idxFront, idxBack);
        cout<< maximum * 2<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}