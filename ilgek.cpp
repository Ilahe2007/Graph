#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	ll g[n+1][n+1],c=0;
	memset(g,0,sizeof(g));
	for (ll i=1;i<=n;i++){
		for (ll j=1;j<=n;j++){
			cin>>g[i][j];
			if (i==j and g[i][j]==0){
				c++;
			}
		}
	}if (c!=n){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
