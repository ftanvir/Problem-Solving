#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Matrix;
    int indx1=0, indx2=0;
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=5; j++) {
            cin>>Matrix;
            if(Matrix==1) {
                indx1=i;
                indx2 = j;
                break;
            }
        }
    }

    int result = abs(indx1-3) + abs(indx2-3);
    cout<<result<<endl;

    return 0;
}