#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int s, a, b, c;
        cin>>s>>a>>b>>c;
        double presentPrice=0;
        
        if(c==0) {
            presentPrice = s;    
        }else if(c>0) {
            presentPrice = s+ ((s*c)/100.00); 
            
        } else {
            presentPrice = s + ((s*c)/100.00);

        }

        if(presentPrice>=a && presentPrice<=b) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}