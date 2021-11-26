#include <iostream>
using namespace std;
int main()
{
int t;
cin >>t;
for(int i=0;i!=t;i++)
{
int ch=0;
string s;
cin >>s;
if((s[s.size()-1]-'0')%2==0){
    cout << 0<<endl;  
    }else{
        if((s[0]-'0')%2==0){
            cout <<1<<endl; 
        }else{
        for(int j=0;j!=s.size();j++)
        {
        if((s[j]-'0')%2==0){


        cout<< 2<<endl;
        break;
        }
        if(j==s.size()-1)cout <<-1<<endl;
        }

}
}




}
}


