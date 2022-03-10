#include <bits/stdc++.h>
using namespace std;
int main() {
    int g, d1, d2, d3, sum=0;
    cin>>d1>>d2>>d3;
    sum=d1+d2+d3;
    g=(2*d1)+(2*d2);
    cout<<min(g, sum)<<endl;

    return 0;
}