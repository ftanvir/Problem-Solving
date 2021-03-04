#include <bits/stdc++.h>
using namespace std;
int main()
{
    int given[3][3], finall[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            finall[i][j]=1;
            cin>>given[i][j];
        }
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(given[i][j]%2 != 0) {
                finall[i][j]= 1- finall[i][j];
                if(i+1<n) {
                    finall[i+1][j]= 1- finall[i+1][j];
                }
                if(j+1<n) {
                    finall[i][j+1]= 1-finall[i][j+1];
                }
                if(i-1>=0) {
                    finall[i-1][j]= 1- finall[i-1][j];
                }
                if(j-1>=0) {
                    finall[i][j-1] = 1- finall[i][j-1];
                }
            }
        }
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout<<[i][j]
        } cout<<endl;
    }


    return 0;
}