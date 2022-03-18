#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		vector <int> a(3);
		for (int i=0;i<n;i++){
            cin>>k;
            a[k%3]++;
	    }
		k=0;
		for (int i=0;i<4;i++){
            while  (a[i%3]>(n/3)){
                a[i%3]--;
                k++;
                a[(i+1)%3]++;
            }
		}
		cout<<k<<endl;
		
	}
}
