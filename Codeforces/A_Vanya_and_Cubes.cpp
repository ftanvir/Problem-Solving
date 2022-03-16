#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0, cnt=0, id=0;
    cin>>n;
    for(int i=1; sum<=n; i++) {
        cnt+=i;
        sum+=cnt;
        id++;
    }
    cout<<id-1<<endl;
    return 0;
}