#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, x;
        cin>>n>>x;
        vector<int>vi, vi1;
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            vi.push_back(num);
        }
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            vi1.push_back(num);
        }

        int flag = 0;
        int sum = 0;
        for(int i=0; i<n; i++) {
            sum = vi[i]+vi1[n-1-i];
            if(sum>x) {
                flag =1;
                break;
            }
        }
        if(flag==1) {
            cout<<"No"<<endl;
        } else {
            cout<<"Yes"<<endl;
        }
    }
    
    
    return 0;
}