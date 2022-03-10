#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    vector<int>vi;
    for(int i=0; i<n; i++) {
        int num;
        cin>>num;
        vi.push_back(num);
    }
    int sum = 0;
    sort(vi.begin(), vi.end()) ;
    for(int i=0; i<k; i++) {
        if(vi[i]<0) {
            vi[i] = -vi[i];
            sum+=vi[i];
        }
        
    }
    cout<<sum<<endl;
    return 0;
}