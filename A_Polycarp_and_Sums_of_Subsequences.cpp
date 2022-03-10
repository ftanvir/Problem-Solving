#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        vector<ll>vi;
        for(int i=0; i<7; i++) {
            int num;
            cin>>num;
            vi.push_back(num);
        }
        ll sumTwo;
        sumTwo = vi[0]+vi[1];
        if(sumTwo==vi[2]) {
            cout<<vi[0]<<" "<<vi[1]<<" "<<vi[3]<<endl;
        } else {
            cout<<vi[0]<<" "<<vi[1]<<" "<<vi[2]<<endl;
        }
    }
    return 0;
}