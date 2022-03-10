#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, b, y;
    cin>>y>>b>>r;

    cout<<min(y+2, min(b+1, r))*3-3<<endl;
    return 0;
}
