#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,m;
	cin>>n>>m;
	ll g[n+1][n+1];
	memset(g,0,sizeof(g));
	set<ll>s;
	while(m--){
		ll a,b;
		cin>>a>>b;
		g[a][b]=g[b][a]=1;
	}for (ll i=1;i<=n;i++){
		ll c=0;
		for (ll j=1;j<=n;j++){
			if (g[i][j]==1){
				c++;
			}
		}s.insert(c);
	}if (s.size()==1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
