//AC
//codeforces(https://codeforces.com/problemset/problem/231/A)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[3], sum=0, solve=0;
    while(cin>>n) {
    while(n--) {
        for(int i =0; i<3; i++) {
            cin>>arr[i]; //input array no 1/0
            if(arr[i]==1) {
                sum++;
            }
        }
        if(sum>=2) {
            solve++;
        }
        sum =0;

    }
    cout<<solve<<"\n";
    solve =0;
    }
    return 0;

}
