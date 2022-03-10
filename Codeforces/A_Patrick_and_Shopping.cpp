#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int d1, d2, d3;
    cin>>d1>>d2>>d3;
    int dist1, dist2, dist3;
    dist1 = (2*d1)+(2*d2);
    dist2 = (2*(min(d1, d2))) + (2*d3);
    dist3 = d1+d2+d3;
    cout<<min(dist1, min(dist2, dist3))<<endl;

    return 0;
}