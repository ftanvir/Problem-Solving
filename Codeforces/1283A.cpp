#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, hh, mm;
    cin>>t;
    while(t--) {
        cin>>hh>>mm;
        cout<<(((hh+1)-24)*60)+(60-mm)<<endl;
    }
    return 0;
}