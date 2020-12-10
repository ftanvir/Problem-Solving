#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define pp pop_back
using namespace std;

int main ()
{
    int n, p[10001];
    cin>>n;
    int maxm1 =0, maxm=0 ,num=0;
    for (int i=1; i<=n; i++) {
        cin>>p[i];
    }
    for (int i=1; i<=n; i++) {
        if(p[i]>maxm1) {
            maxm1=p[i];
            maxm = i;
        }
    }
    cout<<maxm<<" ";
    p[maxm]=0;
    for (int i=1; i<=n; i++) {
        if(p[i]>num) {
            num = p[i];
        }
    }
    cout<<num<<endl;


    return 0;
}
