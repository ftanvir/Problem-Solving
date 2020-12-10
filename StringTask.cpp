#include <iostream>
#include <string>
using namespace std;

int main() {
    string ch,cngCh2;
    cin>>ch;
    int len=ch.size();
    for(int i=0;i<len;i++){
            if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='y'||ch[i]=='A'||ch[i]=='E'||ch[i]=='O'||ch[i]=='I'||ch[i]=='U'||ch[i]=='Y')
            continue;
            else
                {
                cngCh2+='.';
                cngCh2+=towlower(ch[i]);
                }
    }
    cout<<cngCh2<<endl;

    return 0;
}
