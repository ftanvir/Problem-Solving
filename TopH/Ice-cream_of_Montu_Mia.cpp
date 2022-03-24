#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a, b,c;
    cin>>a>>b>>c;
    int minm;
    minm = min(a,min(b,c));
    if((n-minm)<10) {
        cout<<"No :-("<<endl;
    } else {
        cout<<"Yes :-D"<<endl;
    }
    return 0;
}