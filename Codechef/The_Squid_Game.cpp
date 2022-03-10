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
        sort(vi.begin(), vi.end(), greater<int>());
        int sum = 0;
        for(int i=0; i<n-1; i++) {
            sum+= vi[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}