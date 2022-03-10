#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, x, p;
        cin>>n>>x>>p;
        int marks = x*3;
        int negMarks = (n-x)*(-1);
        int obtainMarks = marks + negMarks;
        if(obtainMarks>=p) {
            cout<<"PASS"<<endl;
        } else {
            cout<<"FAIL"<<endl;
        }
    }
    return 0;
}