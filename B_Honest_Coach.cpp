#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>vi;
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            vi.push_back(num);
        }
        int min = INT_MAX;
        sort(vi.begin(), vi.end());
        for(int i=0; i<n-1; i++) {
            int res = vi[i+1] - vi[i];
            if(res<min) {
                min = res;
            }
        }
        cout<<min<<endl;

    }
    return 0;
}