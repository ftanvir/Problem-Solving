#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll num;
        cin>>num;
        if(num%10==9) {
            cout<<num/10 + 1<<endl;
        } else {
            cout<<num/10<<endl;
        }
    }
    return 0;
}