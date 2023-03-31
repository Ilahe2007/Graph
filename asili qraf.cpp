#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,m;
	cin>>n>>m;
	ll g[n+1][n+1],say=0;
	memset(g,0,sizeof(g));
	while (m--){
		ll a,b;
		cin>>a>>b;
		g[a][b]=g[b][a]=1;
	}for (ll i=1;i<=n;i++){
		for (ll j=1;j<=n;j++){
			if (g[i][j]==1){
				say++;
			}
		}
	}if (say==n*n-n){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
