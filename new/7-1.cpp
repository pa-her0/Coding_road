#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    // n 表示点 m 表示边 建图
    vector<vector<int>> g(n+1,vector<int>(n+1,0));

    vector<vector<int>> dp(n+1,vector<int>(m+1,INT_MAX/2));
    
    for(int i = 0; i < m; i++){
        int u,v,w;
        cin >> u >> v >> w;
        g[u][v] = w;
        g[v][u] = w;
    }

    for(int i = 1; i <= n; i++){
        for(int j =  1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if(g[i][k] && g[k][j]){
                    g[i][j] = min(g[i][j],g[i][k] + g[k][j]);
                }
        }
    }
}
for(int i =1; i <= n; i++){
    for(int j =1; j <=n; j++){
        cout << g[i][j] << " ";
    }cout << endl;
}
}