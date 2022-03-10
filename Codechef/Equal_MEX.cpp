#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--) {
       int n;
       cin>>n;
       map<int, int> mpp;
       for(int i=0; i<2*n; i++) {
           int num;
           cin>>num;
           mpp[num]++;
       } 
       int flag = -1;

       for(int i=0; i<2*n; i++) {
           if(mpp[i]==0) {
               flag = 0;
                break;
           } else if(mpp[i]==1) {
               flag = 1;
               break;
           }
       } 
       if(flag==-1) {
           cout<<"NO"<<endl;
       } else if(flag==1) {
           cout<<"NO"<<endl;
       } else if(flag == 0) {
           cout<<"YES"<<endl;
       }
    }
    return 0;
}