#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long k, n, arr[2], cnt=0;
    cin>>n;
    for(long long i=0; i<n; i++) {
        cin>>k;
        if((k%10)!=(k%10)) {
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    

    return 0;
}