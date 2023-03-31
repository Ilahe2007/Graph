#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int g[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin>>g[i][j];
        }
    }for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if(i != j && j != k && i != k && g[i][j] == 1 && g[j][k] == 1 && g[i][k] != 1){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }cout<<"YES"<<endl;
}
