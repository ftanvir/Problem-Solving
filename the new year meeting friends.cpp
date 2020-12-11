#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3, num1=0, num2=0, num3=0;
    cin>>x1>>x2>>x3;
    num1= abs(x1-x3) + abs(x2-x3);
    num2 = abs(x1-x2) + abs(x3-x2);
    num3= abs(x1-x2) + abs(x1-x3);

    cout<<min(num1, min(num2, num3))<<endl;
    
    return 0;
}