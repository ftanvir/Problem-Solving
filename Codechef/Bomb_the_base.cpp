#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, x;
        cin>>n>>x;
        vector<int>vi;
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            vi.push_back(num);
        }
        int cnt=0;
        for(int i=0; i<n; i++) {
            if(vi[i]<x) {
                cnt = i+1;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}