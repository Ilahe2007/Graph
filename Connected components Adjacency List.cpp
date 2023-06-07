#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,color[10001],c;
vector<ll>g[10001];

void dfs(ll s){
	color[s]=1;
	for(ll i=0;i<g[s].size();i++){
		ll u=g[s][i];
		if(!color[u]){
			dfs(u);
		}
	}
}

int main(){
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll a;
		cin>>a;
		while(a--){
			ll b;
			cin>>b;
			g[i].push_back(b);
		}
	}for(ll i=1;i<=n;i++){
		if(!color[i]){
			dfs(i);
			c++;
		}
	}cout<<c<<endl;
}
