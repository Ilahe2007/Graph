#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	ll g[n+1][n+1];
	for (ll i=1;i<=n;i++){
		for (ll j=1;j<=n;j++){
			cin>>g[i][j];
			if (g[i][j]==1){
				cout<<i<<" "<<j<<endl;
			}
		}
	}
}
