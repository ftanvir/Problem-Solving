#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    int len = 0, h1, l2, o1, e1, i;
    cin>>ch;
    len = ch.size()
    for(int i =0; i < len; i++) {
        if(ch[i] == "h") {
            h1++;
        } if(ch[i]=="e") {
            e1++;
        } if(ch[i]=="o") {
            o1++;
        } if(ch[i]=="l") {
            l2++;
        }
    }
    if(h1>1 && e1>1 && l2>2 && o1>1) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;

}