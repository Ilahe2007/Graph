#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,g[101][101],color[101],count_camp;

void dfs(ll s){
	color[s]=1;
	for(ll i=1;i<=n;i++){
		if(g[s][i]==1 && color[i]==0){
			dfs(i);
		}
	}
}

int main(){
	cin>>n;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			cin>>g[i][j];
		}
	}for(ll i=1;i<=n;i++){
		if(color[i]==0){
			dfs(i);
			count_camp++;
		}
	}cout<<count_camp<<endl;
}
