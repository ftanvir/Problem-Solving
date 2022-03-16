    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main(){
    string a;
    int t;
    cin>>t;
    while(t--){
        cin>>a;
        int l=a.find("1"),r=a.rfind("1"),sum=0,i;
        if(l!=-1){
            for(i=l;i<r;i++)
            if(a[i]=='0') sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
    }