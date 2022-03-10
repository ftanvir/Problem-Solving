#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll n, num1=0, num2=0, num3=0, ans1=0, ans2=0, ans=0;
        cin>>n;
        vector<ll>vl;
        for(ll i=0; i<n; i++) {
            int num;
            cin>>num;
            vl.push_back(num);
        }
        sort(vl.begin(), vl.end(), greater<int>());

        num1 = vl[0], num2 = vl[1], num3 = vl[n-1];

        ans1 = (num1-num3) * num2;
        ans2 = (num2-num3) * num2;
        ans = max(ans1, ans2);

        cout<<ans<<endl;
    }

    return 0;
}