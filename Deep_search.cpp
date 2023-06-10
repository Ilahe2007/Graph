#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m,g[101][101],color[101];
vector<ll>v;

void dfs(ll s){
    color[s]=1;
    for(ll i=0;i<=n;i++){
        if(!color[i] and g[s][i]){
            dfs(i);
            v.push_back(i);
        }
    }
}

int main(){
    cin>>n>>m;
    memset(g,0,sizeof(g));
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            cin>>g[i][j];
        }
    }dfs(m);
    cout<<v.size()+1<<endl;
}
