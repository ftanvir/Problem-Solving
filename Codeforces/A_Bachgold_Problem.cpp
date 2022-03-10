#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int n, cnt=0;;
    cin>>n;
    vector<int>primes;
    while(n>=2) {
        if(n%2==0) {
            primes.push_back(2);
            n-=2;
        }else if(n%2==1) {
            primes.push_back(3);
            n-=3;
        } else if(n==2) {
            primes.push_back(2);
            n-=2;
        } else {
            primes.push_back(3);
            n-=3;
        }
        cnt++;
    }
    cout<<cnt<<endl;
    for(int i=0; i<cnt; i++) {
        cout<<primes[i]<<" ";
    }cout<<endl;
    
}