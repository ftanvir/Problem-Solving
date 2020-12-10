#include <bits/stdc++.h>
using namespace std;
/*int main()
{
    int rem, year, d1, d2, d3, d4;
    cin>>year;
    d4 = year/1000;
    d1 = year%10;
    rem = year/10;
    d2= rem%10;
    rem = rem/10;
    d3= rem%10;
    if(d1 != d2 && d1 != d3 && d2!= d3) {
        while(d1 == d2 || d1==d3 || d2==d3) {
            year++;
        }
    }
    cout<<year<<endl;
    
    return 0;
}*/

int main()
{
    int year, d1, d2, d3, d4, rem;
    while(cin>>year) {
        year++;
        d1= year/1000;
        d4 = year%10;
        d3 = (year/10) % 10;
        d2 = (year/100)%10;
        if(d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4) {
            break;
        }

        cout<<year<<endl;

        return 0;
    }

}