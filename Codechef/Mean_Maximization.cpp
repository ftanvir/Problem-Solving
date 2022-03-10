#include<bits/stdc++.h>
using namespace std;


#define all(cont) cont.begin(), cont.end()
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.rbegin(),arr.rend());
        int a = *arr.begin();
    
        int sm = accumulate(all(arr),0LL);
        double ans = double(sm-a)/(n-1);
        ans+=a;
        cout << setprecision(6) << fixed;
        cout << ans << '\n';
        }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--) {
//         ll n;
//         cin>>n;
//         vector<ll>vl;
//         double sum1=0, sum2=0, ans=0;
//         sort(vl.rbegin(), vl.rend());
//         for(ll i = 0; i<n; i++) {
//             cin>>vl[i];
//             sum1+=vl[i];
//         }
//         for(ll i=n-1; i>0; i--) {
//             sum2+=vl[i];
//             sum1-=vl[i];
//             ans = max(ans, (1.0)*sum1/(n-i) + (1.0)*sum2/n-i);
//         }
//         printf("%.6f\n", ans);
//     }

//     return 0;
// }