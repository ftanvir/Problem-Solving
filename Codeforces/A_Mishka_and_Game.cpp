#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, chris = 0, mishka = 0;
    cin>>n;
    for(int i=0; i<n; i++) {
        int m, c;
        cin>>m>>c;
        if(m>c) {
            mishka++;
        } else if(m<c) {
            chris++;
        } else {
            mishka++;
            chris++;
        }
    }
    if(mishka>chris) {
        cout<<"Mishka"<<endl;
    } else if(chris>mishka) {
        cout<<"Chris"<<endl;
    } else {
        cout<<"Friendship is magic!^^"<<endl;
    }

    return 0;
}