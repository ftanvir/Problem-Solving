#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector <int> a;
        vector<int> dup;
        for(int i=0; i<n; i++) {
            int num;
            cin>>num;
            a.push_back(num);
        }
        for(int i=0; i<n; i++) {
            dup.push_back(a[i]);
        }
        sort(dup.begin(), dup.end());
        int MaxElement = dup[n-1];
        int MinElement = dup[0];
        //from left traverse
        int mStepsLeft =0, mxStepsLeft =0;
        for(int i = 0; i<n; i++) {
            if(a[i]==MinElement) {
                mStepsLeft+=1;
                break;
            }
            else {
                mStepsLeft+=1;
            }
        }
        for(int i = 0; i<n; i++) {
            if(a[i]==MaxElement) {
                mxStepsLeft+=1;
                break;
            } else {
                mxStepsLeft+=1;
            }
        }
        //from Right traverse
        int mxStepsRight = 0, mStepsRight=0;
        for(int i= n-1; i>=0; i--){
            if(a[i]==MinElement) {
                mStepsRight+=1;
                break;
            }else {
                mStepsRight +=1;
            }
        }
        for(int i= n-1; i>=0; i--){
            if(a[i]==MaxElement) {
                mxStepsRight+=1;
                break;
            }else {
                mxStepsRight +=1;
            }
        }

        int ans1 = 0, ans2=0, ans3 = 0;
        if(mStepsRight>= mxStepsRight) {
            ans1 = mStepsRight;
        } else if(mxStepsRight>= mStepsRight) {
            ans1 = mxStepsRight;
        }
        if(mxStepsLeft>=mStepsLeft) {
            ans2 = mxStepsLeft;
        } else if(mStepsLeft>=mxStepsLeft) {
            ans2= mStepsLeft;
        }
        ans3 = (min(mStepsRight, mStepsLeft)) + (min(mxStepsLeft, mxStepsRight));
        int ans = min(ans3,(min(ans2,ans1)));

        cout<<ans<<endl;
        
    }

    return 0;
}