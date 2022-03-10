#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6+10;
vector<bool>checkPrime(N, 1);
void sieve() 
{
    checkPrime[0]=checkPrime[1]=false;
    for(ll i=2; i<=N; i++) {
        if(checkPrime[i]==true) {   
            for(ll j=2*i; j<N; j+=i) {
                checkPrime[j]=false;
                
            }
        }
    }
}

int main()
{
    sieve();
    int n;
    cin>>n;
    
    for(int i=2; i<n; i++) {
        if(checkPrime[i]==false && checkPrime[n-i]==false) {
            cout<<i<<" "<<n-i<<endl;
            return 0;
        }
    }

    return 0;
}