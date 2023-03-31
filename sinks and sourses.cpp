#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	ll g[n+1][n+1];
	ll in[n+1]={0};
	ll out[n+1]={0};
	for (ll i=1;i<=n;i++){
		for (ll j=1;j<=n;j++){
			cin>>g[i][j];
			if (g[i][j]==1){
				in[j]=1;
				out[i]=1;
			}
		}
	}cout<<count(in+1,in+n+1,0)<<" ";
	for (ll i=1;i<=n;i++){
		if (in[i]==0){
			cout<<i<<" ";
		}
	}cout<<endl<<count(out+1,out+n+1,0)<<" ";
	for (ll i=1;i<=n;i++){
		if (out[i]==0){
			cout<<i<<" ";
		}
	}cout<<endl;
}
