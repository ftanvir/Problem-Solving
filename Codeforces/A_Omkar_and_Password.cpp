#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        set <long long> v;
        for(int i = 0; i<n; i++) {
            int x;
            cin>>x;
            v.insert(x);
        }
        if(v.size()==1) {
            cout<<n<<endl;
        } else {
            cout<<"1"<<endl;
        }

    }

    return 0;
}