#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n, sum;
    cin>>n;
    int arr[101];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    n=n*100;
    float hel = sum/n;
    float ans = hel*100;
    cout<<ans<<endl;
    return 0;
}
