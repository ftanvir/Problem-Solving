#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,a,b,c,d;
		cin>>n>>a>>b>>c>>d;
		cout<<(n*(a+b)<c-d||n*(a-b)>c+d?"No":"Yes")<<endl;
        
    }
    return 0;
}