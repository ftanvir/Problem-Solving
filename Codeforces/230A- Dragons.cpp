#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    bool flg=true;
    vector<pair<int, int>> v;
    cin>>s>>n;
    for(int i=0; i<n; i++) {
        int x, y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++) {
        if(s>v[i].first) {
            s+=v[i].second;
            
        } else {
            flg=0;
            break;
        }
    }
    if(flg) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
     


    return 0;
}