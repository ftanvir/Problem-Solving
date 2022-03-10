#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    vector<int>v;
    for(int i=0; i<4; i++) {
        int num;
        cin>>num;
        v.push_back(num);
    }
    ll buy = 0;
    sort(v.begin(), v.end());
    for(int i=0; i<3; i++) {
        if(v[i]==v[i+1]) {
            buy++;
        }
    }
    cout<<buy<<endl;

    return 0;
}