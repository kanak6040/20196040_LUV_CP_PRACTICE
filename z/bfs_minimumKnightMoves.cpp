#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 1e5 + 10 , INF = 1e9 +10 ;
vector<pair<int,int>> g[N];
vector<int> lev(N, INF) ;
int n ,m;

int bfs(){
    deque<int> q;
    q.push_back(1);
    lev[1] = 0;
    while(!q.empty()){
        int cur_v = q.front();
        q.pop_front();

        for(auto child : g[cur_v]){
            int child_v = child.first;
            int wt = child.second;
            if( lev[cur_v] + wt < lev[child_v]){
                
            }
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    cin >> n >> m;
    for( int i = 0 ; i < m ; i++){
        int x, y; cin >> x >> y;
        g[x].push_back({y,0});
        g[y].push_back({x,1});
    }
    cout << bfs()<<"\n";
}