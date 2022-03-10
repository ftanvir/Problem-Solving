#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int numberCoOrdinate;
        cin>>numberCoOrdinate;
        set<ll> x, y;
        for(int i=0; i<numberCoOrdinate; i++) {
            int xi, yi;
            cin>>xi>>yi;
            x.insert(xi);
            y.insert(yi);
        }
        ll lenX, lenY;
        lenX = x.size();
        lenY = y.size();
        cout<<lenX+lenY<<endl;
    }
    return 0;
}