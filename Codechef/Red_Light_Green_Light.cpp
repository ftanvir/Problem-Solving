#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, k, cnt=0;
        cin>>n>>k;
        vector<int> vi(n);
        for(int i=0; i<n; i++) {
            int num; 
            cin>>num;
            if(num>k) {
                cnt+=1;
            }
        }
        
        cout<<cnt<<endl;
    }
    return 0;
}