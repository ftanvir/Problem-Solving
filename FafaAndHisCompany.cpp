#include <bits/stdc++.h>
using namespace std;
int main()
{
    int empl, newEmpl,  rem, led, ways=0;
    cin>>empl;
    int mn=empl/2;
    for(int i=1; i<=mn; i++) {
        newEmpl = empl-i;
        rem= empl-newEmpl;
        if(newEmpl%rem==0) {
            ways++;
        }
    } cout<<ways<<endl;
}
