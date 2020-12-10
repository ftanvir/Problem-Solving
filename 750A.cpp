#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i=0;
    cin>>n>>k;
    while(k<=240) {
        i++;
        k+=5*i;
    }
    cout<<min(i-1, n)<<endl;

    return 0;
}
