#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q, lev;
    set<int>levels;
    cin>>n;
    cin>>p;
    for(int i=0; i<p; i++) {
        cin>>lev;
        levels.insert(lev);
    }
    cin>>q;
    for(int j =0; j<q; j++) {
        cin>>lev;
        levels.insert(lev);
    }

    if(levels.size()==n) {
        cout<<"I become the guy."<<endl;
    } else {
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}