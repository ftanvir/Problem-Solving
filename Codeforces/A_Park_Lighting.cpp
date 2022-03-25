#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int row, col;
        cin>>row>>col;

        int lit = 0;

        if(row>1) {
            if(row%2==0) {
                lit = (row/2) * col;
            } else {
                if(col%2 != 0){
                    lit = ((row/2)*col)  + ((col/2)+1);
                } else {
                    lit = ((row/2)*col)  + ((col/2));
                }
            }
        } else {
            if(col%2 != 0){
                    lit = ((row/2)*col)  + ((col/2)+1);
                } else {
                    lit = ((row/2)*col)  + ((col/2));
                }
        }
        cout<<lit<<endl;
    }
    return 0;
}