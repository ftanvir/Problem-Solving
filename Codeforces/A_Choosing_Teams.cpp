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
        num+=k;
        vi.push_back(num);
    }
    sort(vi.begin(), vi.end());
    int cnt=0, teams=0;
    for(int i=0; i<n; i++) {
        if(vi[i]<=5) {
            cnt++;
        }
        if(cnt==3) {
            teams++;
            cnt=0;
        }
    }
    cout<<teams<<endl;

    return 0;
}