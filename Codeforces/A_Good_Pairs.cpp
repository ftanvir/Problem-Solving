//solved, need to push on github

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll n;
        vector<ll>v;
        cin>>n;
        for(ll i=0; i<n; i++) {
            int num;
            cin>>num;
            v.push_back(num);
        }
        int maxElementIndex; 
        maxElementIndex = max_element(v.begin(),v.end()) - v.begin();
        int minElementIndex; 
        minElementIndex= std::min_element(v.begin(),v.end()) - v.begin();
        cout<<minElementIndex+1<<" "<<maxElementIndex+1<<endl;
    }
    return 0;
}