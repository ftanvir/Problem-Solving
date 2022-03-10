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
        sort(vi.begin(), vi.end(), greater<int>());
        int total =0, flag =0, idx = 0;
        for(int i=0; i<n; i++) {
            total+=vi[i];
            if(total>=x) {
                flag = 1;
                idx = i;
                break;
            }
        }
        if(flag) {
            cout<<idx+1<<endl;
        } else {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}