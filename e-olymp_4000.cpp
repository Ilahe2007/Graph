#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,g[101][101],color[101],c;

void dfs(ll s){
	color[s]=1;
	c++;
	for(ll i=1;i<=n;i++){
		if(g[s][i] and !color[i]){
			dfs(i);
		}
	}
}

int main(){
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			cin>>g[i][j];
		}
	}dfs(m);
	cout<<c<<endl;
}
