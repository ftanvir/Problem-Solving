#include<bits/stdc++.h>
using namespace std;

bool prime(int n) {

    if(n==1) {
        return true;
    }
    for(int i =2; i*i<=n; i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}


int main() {
    int n, m, flag=0;
    cin>>n>>m;
    for ( int i=n+1; i<=m; i++) {
        if(prime(i)) {
                flag=i;
                break;
        }
    }
    if(flag==m){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

}