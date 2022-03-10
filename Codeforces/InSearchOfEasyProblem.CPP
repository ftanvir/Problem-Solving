#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    while(n--) {
        cin>>i;
    } if(i==1) {
        cout<<"HARD"<<endl;
    } else cout<<"EASY"<<endl;
    return 0;
}
/*
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    while(n--) {
        cin >> i;
        if (i == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;

    return 0;
}*/
