/*
HackerRank STL problem solution
problem link: https://www.hackerrank.com/challenges/cpp-lower-bound/problem

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    vector<ll> v;
    for(int i =1 ; i<=n; i++) {
        ll num;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    int q;
    cin>>q;
    while(q--) {
        ll qNum;
        cin>>qNum;
        vector<ll>::iterator low = lower_bound(v.begin(), v.end(), qNum);
       if (v[low - v.begin()] == qNum)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;

    }

    return 0;
}