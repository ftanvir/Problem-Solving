#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{
    int t; 
    cin>>t;
    while(t--) {
        vector<int> vJohn, vJack;
        int n, m, sum1=0, sum2=0, counter=0, flag =0;
        cin>>n>>m;
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            sum1+=num;
            vJohn.push_back(num);
        }
        for(int i=0; i<m; i++) {
            int num;
            cin>>num;
            sum2+=num;
            vJack.push_back(num);
        }
        sort(vJohn.begin(), vJohn.end());
        sort(vJack.begin(), vJack.end(), greater<int>());
        if(sum1>sum2) {
            cout<<"0"<<endl;
        } else {
            int ans=0;
            int minm = min(n, m);
            for(int i=0; i<minm; i++) {
                ans++;
                sum1 = sum1 - vJohn[i] +vJack[i];
                sum2 = sum2 - vJack[i] +vJohn[i];
                if(sum1>sum2) {
                    cout<<ans<<endl;
                    break;
                }
            }
        }
        
        

        if(sum1<=sum2) {
            cout<<"-1"<<endl;
        } 


    }
    return 0;
}