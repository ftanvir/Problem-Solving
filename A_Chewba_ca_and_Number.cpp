#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long> numReverse;
    long long x;
    cin>>x;
    while(x%10>0) {
        int lastD = x%10;
        if((9-lastD)<lastD) {
            int newD = 9-lastD;
            numReverse.push_back(newD);
        } else {
            numReverse.push_back(lastD);
        }
        x = x/10;
    }
    
    return 0;
}