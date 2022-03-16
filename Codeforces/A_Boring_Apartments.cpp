#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int arr[4] = {1, 3, 6, 10};
        int len , fdigit, ans = 0;
        len = s.size();
        fdigit = s[0] - '0';
        ans = (fdigit-1)*10 + arr[len-1];
        cout<<ans<<endl;
    }
    return 0;
}