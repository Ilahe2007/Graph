#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,color[101],g[101][101];

void dfs(ll s){
  color[s]=1;
  for(ll i=1;i<=n;i++){
    if(g[s][i] && !color[i]){
        cout<<s<<" "<<i<<endl;
        dfs(i);
    }
  }
}

int main(){
  cin>>n>>m;
  while(m--){
    ll a,b;
    cin>>a>>b;
    g[a][b]=g[b][a]=1;
  }dfs(1);
}
