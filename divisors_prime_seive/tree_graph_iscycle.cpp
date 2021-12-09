#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N  = 1e3 +10;
vector<int> g[N];
bool vis[N];

// void dfs( int vertex){
//     vis[vertex] = true;
//     current_cc.push_back(vertex);
//     for(auto child : g[vertex]){
//         if(vis[child]) continue;
//         // take action on child before entering the child node
//         dfs(child);
//         //take action on child after exiting the child node 
//     }
//     // take action on vertex before exiting the vertex
// }

bool dfs( int vertex, int parent){
    vis[vertex] = true;
    bool isLoopExists = false;

    for(int child : g[vertex]){
        if(vis[child] && child == parent) continue;
        else if(vis[child]) return true;
       isLoopExists |=  dfs(child, vertex);
        //take action on child after exiting the child node 
    }
    // take action on vertex before exiting the vertex
    return isLoopExists;
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n, e; cin >> n >> e;
    for( int i= 0;  i < e ; i++){
        int x , y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int ct = 0;
    // for( int i=1 ;i <= n;i++){
    //     if(vis[i] ) continue; 
    //     current_cc.clear();
    //     dfs(i,0);
    //     cc.push_back(current_cc);
    //     ct++;
    // }
    // cout << ct<<"\n";
    // cout << cc.size()<<"\n";
    // for( auto c_cc : cc){
    //     for( int vertex : c_cc){
    //         cout << vertex <<" ";
    //     }
    //     cout << endl;
    // }


    bool isLoop = false;
    for( int i=1 ;i <= n;i++){
        if(vis[i] ) continue; 
        if(dfs(i,0)){
            isLoop = true;
            break;
        }
    }
    cout<< isLoop<< endl;

    return 0;
}
