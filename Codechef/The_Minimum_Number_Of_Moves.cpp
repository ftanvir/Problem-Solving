#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>vi(n);
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            vi.push_back(num);
        }
        int maxm = 0;
        for(int i=0; i<n; i++) {
            if(vi[i]>maxm) {
                maxm = vi[i];
            }
        }
        for(int i=0; i<n; i++) {
            if(vi[i]>maxm) {
                maxm = vi[i];
            }
        }
        int diff = 0;
        for(int i=0; i<n; i++) {
            if(vi[i]<maxm) {
                diff+= ((maxm) - (vi[i]));
            }
        }
        cout<<diff<<endl;

    }
    return 0;
}