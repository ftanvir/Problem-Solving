#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        set <int> s;
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            if(s.count(num)) {
                num++;
            }
            s.insert(num);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}