#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N  = 1e5 +10;
vector<int> g[N];
int par[N];

void dfs( int v, int p = -1){
    par[v] = p ;
    for( int child : g[v]){
        if(child == p) continue;
        dfs(child, v);
    }
}




int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n; cin >> n; // n nodes // n-1 edges
    for( int i= 0;  i < n -1 ; i++){
        int x , y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1) ;

    


}