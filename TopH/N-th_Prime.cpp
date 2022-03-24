#include <bits/stdc++.h>
using namespace std;
 
#define fast      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi          acos(-1.0)
#define nl          '\n'

/**-------Shortend Library-------*/

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



vector<ll> primes;
const ll lim = 1e7 + 10;
ll mark[lim];
void sieve() {
  primes.push_back(2);
  for (ll i = 4; i < lim; i += 2) mark[i] = 1;
  for (ll i = 3; i < lim; i++) {
    if (!mark[i]) {
      primes.push_back(i);
      for (ll j = 2 * i; j < lim; j += i) {
        mark[j] = 1;
      }
    }
  }
}
int main() {
  sieve();
  ll n;
  cin >> n;
  cout << primes[n - 1] << endl;
  return 0;
}