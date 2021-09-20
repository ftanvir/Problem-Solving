/*
Write a Programme to compute the 4 right-most digits of 2^10105 + 2^123456
Expected Output:
3968
*/
/*
Discussion of solution:
>>To get 4 right-most digits we need to mod the number by 10000
..that means,
    [2^10105 + 2^123456] mod 10000
    =>[(2^10105 mod 10000) + (2^123456 mod 10000)] mod 100000       //applying basic mod rule

    every mod part will be calculated through calculateMod(), which is nothing but modular exponentiation

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int calculateMod(long long x, unsigned int y)
{
    int result = 1;
    x = x%10000;        //due to 4 digit mod of 10000 will give 4digit;
    if(x==0) {
        return 0;
    }
    while(y>0) {

        if(y&1) {
            result = (result*x) %10000;
        }

        y = y>>1; //right shifting by 1 makes the decimal divided by 2;
        x = (x*x)%10000;
    }
    return result;
}

int main()
{
    ll base1, power1, base2, power2;
    cin>>base1>>power1>>base2>>power2;
    
    ll ans = (calculateMod(base1, power1) + calculateMod(base2,power2)) % 10000;
    cout<<ans<<endl;
    



    return 0;
}