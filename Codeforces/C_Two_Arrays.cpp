#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        vector <int> v1;
        vector <int> v2;
        int n;
        cin>>n;
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            v1.push_back(num);
        }
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            v2.push_back(num);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int flag = 0;
        for(int i=0; i<n; i++) {
            if((abs(v1[i]-v2[i])>1)  || v1[i]>v2[i]) {
                flag = 1;
                break;
            }
        }
        if(flag) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }


    }

    return 0;
}