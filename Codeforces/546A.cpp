#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll k , n, w, totalMoney=0, amount =0;
    cin>>k>>n>>w;
    for(ll i=1; i<=w; i++) {
        totalMoney=i*k;
        amount+=totalMoney;
        totalMoney =0;
    }
    if(n<amount) {
        cout<<amount-n<<endl;
    } else {
        cout<<"0"<<endl;
    }

    return 0;
}