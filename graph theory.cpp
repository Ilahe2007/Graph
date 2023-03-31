#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	vector<ll>v[n+1];
	ll g[n+1][n+1];
	for (ll i=1;i<=n;i++){
		for (ll j=1;j<=n;j++){
			cin>>g[i][j];
			if (g[i][j]==1){
				v[i].push_back(j);
			}
		}
	}for (ll i=1;i<=n;i++){
		cout<<v[i].size()<<" ";
		for (ll j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}cout<<endl;
	}
}
