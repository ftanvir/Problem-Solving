
//codeforces(https://codeforces.com/problemset/problem/282/A)
//didn't submit
//match with exmple case
//AC
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, re=0;
    string ch;
    cin>>n;
    while(n--) {
            cin>>ch;
            if(ch[1]=='+') {
                re++;
            } else {
                re--;
            }
    }
    cout<<re<<"\n";

    return 0;
}
