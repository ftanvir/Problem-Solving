#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin>>a>>b>>c>>d>>e>>f;

    int minim =0, fsetCost=0, esetCost = 0, totalCost =0;

    if(f>e) {
        minim = min(b, min(c,d));
        fsetCost = f * min(b, min(c,d));
        d = d - minim;
        esetCost = e * min(a, d);
        totalCost = fsetCost + esetCost;
        cout<<totalCost<<endl;
    } 
    else if(e>=f) {
        minim = min(a, d);
        esetCost = e*minim;
        d= d - minim;
        fsetCost = f* min(b, min(c,d));
        totalCost = fsetCost + esetCost;
        cout<<totalCost<<endl;
    }
    return 0;
}
