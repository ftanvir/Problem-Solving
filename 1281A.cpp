#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string name;
    while(t--) {
        cin>>name;
        int len= name.size();
        if(name[len-1]=='o') {
            cout<<"FILIPINO"<<endl;
        }
        else if(name[len-1]=='u') {
            cout<<"JAPANESE"<<endl;
        }
        else{
            cout<<"KOREAN"<<endl;
        }
        len =0;
    }
    return 0;
}
