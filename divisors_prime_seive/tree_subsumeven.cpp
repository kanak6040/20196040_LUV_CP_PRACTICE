#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N  = 1e5 +10;
vector<int> g[N];
int subtree_sum[N], even_ct[N];

// print subtree sum of V and Number of Even Numbers in subtree of V

void dfs( int vertex, int par = 0){
    
    if(vertex %2 == 0){
        even_ct[vertex]++;
    }
    subtree_sum[vertex] += vertex;
    for(auto child : g[vertex]){
        if(child == par) continue;
        dfs(child,vertex);

        subtree_sum[vertex] +=  subtree_sum[child];
        even_ct[vertex] += even_ct[child];
    }
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n; cin >> n;
    for( int i= 0;  i < n -1 ; i++){
        int x , y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    
    dfs(1);
    for( int i=1; i <= n; i++){
        cout << subtree_sum[i]<<" "<<even_ct[i]<<"\n";
    }

    // int q ; cin >> q;
    // while(q--){
    // }
    return 0;
}
