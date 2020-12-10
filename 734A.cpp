#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, l, a=0, d=0;
    char s;
    while(cin>>n){
            a=0;
            d=0;
        for(int i=0; i<n; i++) {
            cin>>s;
            if(s=='A'){
                a++;
            } else {
                d++;
            }
        }
        if(a>d) {
            cout<<"Anton"<<endl;
        } else if(d>a) {
            cout<<"Danik"<<endl;
        } else if(a==d) {
            cout<<"Friendship"<<endl;
        }

    }
    return 0;
}
