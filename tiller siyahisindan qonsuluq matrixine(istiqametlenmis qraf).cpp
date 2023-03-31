#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,m;
	cin>>n>>m;
	ll g[n+1][n+1];
	memset(g,0,sizeof(g));
	while (m--){
		ll a,b;
		cin>>a>>b;
		g[a][b]=1;
	}for (ll i=1;i<=n;i++){
		for (ll j=1;j<=n;j++){
			cout<<g[i][j]<<" ";
		}cout<<endl;
	}
}
