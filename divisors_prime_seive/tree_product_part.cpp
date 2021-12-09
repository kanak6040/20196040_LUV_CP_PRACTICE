#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N  = 1e5 +10;
vector<int> g[N];
int subtree_sum[N] , val[N];
const int M = 1e9 + 7;

void dfs( int v, int p = -1){
    subtree_sum[v] += val[v];

    for( int child : g[v]){
        if(child == p) continue;
        dfs(child, v);
        subtree_sum[v] += subtree_sum[child];
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

    long long ans = 0;
    for( int i= 2; i <= n ; i++){
        int part1 = subtree_sum[i] ;
        int part2 = subtree_sum[i] - part1 ;
        ans  = max( ans , part1 * 1LL * part2);
    }
    cout << ans;


}