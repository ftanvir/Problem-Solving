#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        vector<int> a, b;
        int n;
        cin>>n;
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            a.push_back(num);
        }
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            b.push_back(num);
        }
        int sum=0, idx=-1;
        for(int i=0; i<n; i++) {
            if(b[i]>a[i]) {
                idx = i;
                break;
            }
            else {
                idx = -1;
            }
        }
        if(idx==0) {
            for(int i=0; i<n; i++) {
                sum+=b[i];
            }
        } else if(idx==-1) {
            for(int i=0; i<n; i++) {
                sum+=a[i];
            }    
        } else {
            for(int j=0; j<idx; j++) {
                sum+=a[j];
            } 
            for(int j=idx; j<n; j++) {
                sum+=b[j];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
