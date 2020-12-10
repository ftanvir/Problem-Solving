#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back;
using namespace std;
typedef long long ll;
int main()
{
    int q, n, x, sum=0, ans=0;
    cin>>q;
    while(q--) {
        cin>>n;
        for(int i=0; i<n; i++) {
            cin>>x;
            sum+=x;
        }
        if(sum%n==0){
            cout<<(sum/n)<<endl;
        }
        else {
            ans=(sum/n)+1;
            cout<<ans<<endl;
        }
        sum =0;
        ans=0;
    }
    return 0;
}