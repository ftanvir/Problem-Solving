#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 void Solve(){
	int l;
	cin>>l;
	string s;
	cin>>s;
	for(ll i=0;i!=l;i++){
		if(s[i]!='2'&&s[i]!='3'&&s[i]!='5'&&s[i]!='7'){
			cout<<1<<endl<<s[i]<<endl;
			return;
		}
	}
	for(ll i=1;i!=l;i++){
		for(ll j=0;j!=i;j++){
			int x=(s[j]-'0')*10+s[i]-'0';
			if(x!=37&&x!=23&&x!=53&&x!=73){
				cout<<2<<endl<<s[j]<<s[i]<<endl;
				return;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	for(ll i=0;i!=t;i++){
		Solve();
	}
	return 0;
}