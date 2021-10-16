#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int num;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    int size = v.size();
    int turn = size - 1;
    int index = floor(turn/2);
    cout<<v[index]<<endl;

    // if(size==1 || size%2==0) {
    //     cout<<"0"<<endl;
    // }
    // else {
    //     int index  = floor(size/2);
    //     cout<<v[index]<<endl;
    // }
    return 0;
}