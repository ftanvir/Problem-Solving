#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;
    string d, e;
    cin>>n;
    for (int i =1; i<=n; i++) {
        if(i%2!=0) {
            cout<<"I hate"<<" ";
            if(i!=n) {
                cout<<"that"<<" ";
        } else {
            cout<<"it"<<" ";
        }
        } else if(i%2 == 0) {
            cout<<"I love"<<" "<<e<<" ";
            if(i!=n) {
                cout<<"that"<<" ";
        } else {
            cout<<"it"<<" ";
        }
        }
    }

    return 0;

}
