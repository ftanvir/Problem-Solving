#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string ch;
    cin>>n;
    for(int i = 0; i<n; i++) {
        cin>>ch;
        if(ch.size()>10) {
            cout<<""<<ch[0]<<ch.size()-2<<""<<ch[ch.size()-1]<<endl;
        } else {
            cout<<ch<<endl;
        }
    }
    return 0;
}
