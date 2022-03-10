#include<bits/stdc++.h>
using namespace  std;
int main()
{
    bool isSame = false;
    string s,s1;
    cin>>s;
    for(int i=0; i<5; i++)
    {
        cin>>s1;
        if((s[0]==s1[0])||(s[1]==s1[1]))
            isSame=true;
    }
    if(isSame)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
