#include <iostream>
using namespace std;
int main()
{
    int a , b, countt=0;
    cin>>a>>b;
    while(a<=b) {
        a=a*3;
        b=b*2;
        countt++;
        if(a>b) {
            break;
        } else continue;
    } cout<<countt<<endl;
}
