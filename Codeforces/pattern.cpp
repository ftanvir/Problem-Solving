#include <iostream>
using namespace std;
int main()
{
    int N, M, cnt=0;
    cin>>N>>M;
    int range = N+M;
    for(int i =1; i<=range; i++) {
        if((i+range)%2==0) {
            cnt+=1;
            range--;
        } cout<<cnt<<endl;
    }
}
