/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[n];
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int j=1; j<=n; j++) {
        for(int i=0; i<n; i++) {
            if(a[j]==i) {
                cout<<i+1<<" "<<endl;
                break;
            }
        }
    }
    return 0;
}*/

#include<iostream>
  using namespace std;

  int main()
  {
      int n;
      cin>>n;
      int i,j,a[n];

      for ( i=0; i<n; i++) cin>>a[i];

       for ( j=1;j<=n; j++)
         for ( i=0; i<n; i++)

        {
          if(a[i]==j) { cout<<(i+1)<<" "; break; }
        }
  }
