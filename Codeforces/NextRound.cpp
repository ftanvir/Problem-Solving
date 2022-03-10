//WA at testCase 4 CodeForces(https://codeforces.com/problemset/problem/158/A)
//5 5
//1 1 1 1 1
//expected 5 but my code gave 0
//AC at last

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int cnt=0, n, k, arr[50], bl;
    while (cin>>n>>k) {
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++) {
            if(arr[i]>=arr[k-1]&&arr[i]>0) {
                cnt++;
            }
        } cout<<cnt<<"\n";
        cnt=0;

    }
    return 0;
}
