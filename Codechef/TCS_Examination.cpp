#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>dragon,sloth;
        int sumD =0, sums = 0;
        for(int i=0; i<3; i++) {
            int num; 
            cin>>num;
            sumD+=num;
            dragon.push_back(num);
        }
        for(int i=0; i<3; i++) {
            int num; 
            cin>>num;
            sums+=num;
            sloth.push_back(num);
        }
        if(sumD>sums) {
            cout<<"DRAGON"<<endl;
        } else if(sums>sumD) {
            cout<<"SLOTH"<<endl;
        } else {
            if(dragon[0]>sloth[0]) {
                cout<<"DRAGON"<<endl;
            } else if(sloth[0]>dragon[0]) {
                cout<<"SLOTH"<<endl;
            } else {
                    if(dragon[1]>sloth[1]) {
                    cout<<"DRAGON"<<endl;
                } else if(sloth[1]>dragon[1]) {
                    cout<<"SLOTH"<<endl;
                } else {
                        if(dragon[2]>sloth[2]) {
                        cout<<"DRAGON"<<endl;
                    } else if(sloth[2]>dragon[2]) {
                        cout<<"SLOTH"<<endl;
                    } else {
                        cout<<"TIE"<<endl;
                    }
                }
        }
    }
    }
    return 0;
}