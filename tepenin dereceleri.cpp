#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,q;
	cin>>n>>q;
	vector<int>g[n+1];
	while (q--){
		ll a;
		cin>>a;
		if (a==1){
			ll u,v;
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}else{
			ll u;
			cin>>u;
			for (ll i=0;i<g[u].size();i++){
				cout<<g[u][i]<<" ";
			}cout<<endl;
		}
	}
}
