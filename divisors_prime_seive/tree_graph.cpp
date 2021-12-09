#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N  = 1e3 +10;
int graph[N][N];
vector<int> graph2[N];
vector<pair<int, int> > graphWithWeight[N]; 
int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, m; cin >> n >> m;
    for( int i = 0; i < m ; i++){
        int v1 , v2; cin >> v1 >> v2 ;
        graph[v1][v2] = 1 ;
        graph[v2][v1] = 1;

        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);

        int w; cin >> w;
        graphWithWeight[v1].push_back({v2,w});
        graphWithWeight[v2].push_back({v1,w});
    }
    // adjacency matrix
    // O( N^2) - space complexity
    // N! = 10^5 / N == 10^3

    // Adjacency List
    // O( N + M)
    // N = 10 ^ 5

    // i , j connected, i , j > wt ?
    int i, j;

    if(graph[i][j] == 1){
        //connected
    }
    for( pair<int, int> child : graphWithWeight[i]){
        if( child.first == j){
            // connnected
            //child.second == wt;
        }
    }


    return 0;
}
