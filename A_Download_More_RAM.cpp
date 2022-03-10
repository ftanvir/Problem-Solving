#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[n];
        vector<pair<int,int>> vpi;
        for(int i=0; i<n; i++) {
            cin>>arr[i]; 
        }
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            vpi.push_back(make_pair(arr[i], num));
        }

        sort(vpi.begin(), vpi.end());
        for(int i=0; i< n; i++) {
            if(vpi[i].first>k) break;
            k+=vpi[i].second;
        }
        cout<<k<<endl;
    }
    
    return 0;
}