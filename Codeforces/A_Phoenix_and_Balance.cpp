#include <bits/stdc++.h>
using namespace std;
 
#define fast      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi          acos(-1.0)
#define nl          '\n'
 
/**-------Shortend Library-------*/

#define vi vector<int>
#define mii map<int, int>

#define ff first
#define ss second
#define all(a)         a.begin(),a.end()
#define Sort(x)        sort(x.begin(),x.end())
#define SortR(x)       sort(x.begin(),x.end(),greater<int>())
#define Reverse(x)     reverse(x.begin(),x.end())
 

#define SortA(ar,s)    sort(ar,ar+s)
#define SortD(ar,s)    sort(ar,ar+s,greater<int>())

#define gcd(a,b)       __gcd(a,b)
#define lcm(a,b)       (a*(b/gcd(a,b)))
#define sq(x)          (x)*(x)
#define mid(l,r)       (l+(r-l)/2)
 

#define leftShift(p)         (p<<1)
#define rightShift(p)        (p>>1)
 
#define min3(a,b,c)       min(a,min(b,c))
#define min4(a,b,c,d)     min(a,min(b,min(c,d)))
#define max3(a,b,c)       max(a,max(b,c))
#define max4(a,b,c,d)     max(a,max(b,max(c,d)))
#define pb(x)             push_back(x)
#define mod               1000000007
#define precision(x)      cout<<fixed<<setprecision(x)
#define yes               cout<<"YES"<<nl
#define no                cout<<"NO"<<nl
 

 
/**----data type----*/
#define ll long long int
#define llu unsigned long long int

/**----Functions to use----**/

ll powerLog(ll base, ll power) 
{
    ll res = 1;
    while(power) 
    {
        if(power%2) 
        {
            res *= base;
            power--;
        } else 
        {
            base *=base;
            power/=2;
        }
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll big =0, small = 0, diff =0;
        for(ll i=1;i<(n/2); i++) {
            int cal;
            cal = powerLog(2, i);
            big+=cal;
        }
        big+= powerLog(2, n);

        for(ll i = n/2; i<n; i++) {
            int cal;
            cal = powerLog(2,i);
            small+=cal;
        }

        diff = big-small;

        cout<<diff<<endl;
    }

    return 0;
}