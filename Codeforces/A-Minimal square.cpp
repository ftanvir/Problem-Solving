#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a, b;
        cin>>a>>b;
        int minSq=(min(max(a*2, b), max(a, 2*b)));
        cout<<minSq*minSq<<endl;
    }
    return 0;
    
}