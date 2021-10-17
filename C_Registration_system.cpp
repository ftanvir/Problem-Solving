#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int>name;
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        if(name[s]) {
            cout<<s<<name[s]<<endl;
        } else {
            cout<<"OK"<<endl; 
        }
        name[s]++;
    }
    return 0;
}