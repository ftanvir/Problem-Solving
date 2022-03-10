#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int x, y;
        cin>>x>>y;
        string s;
        cin>>s;
        int len = s.size();
        int workingdays=0, streak=0, LongStreak=0, maxStreak = INT_MIN;
        for(int i =0; i<len; i++) {
            if(s[i]!='0') {
                workingdays++;
                streak++;
            } else {
                if(maxStreak<=streak) {
                    maxStreak = streak;
                }
                streak = 0;
            }
        }
        if(maxStreak<=streak) {
            maxStreak = streak;
        }
        ll salary = (workingdays*x) + (maxStreak*y);
        cout<<salary<<endl;

    }
    return 0;
}