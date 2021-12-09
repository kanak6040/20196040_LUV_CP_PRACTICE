#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N  = 1e5 +10;
vector<int> g[N];
bool vis[N];


void dfs( int i, int j, int initialColor, int newColor, vector<vector<int>> &image){
    int n = image.size() , m = image[0].size();
    if( i <0 || i >=n || j < 0 || j>=m || image[i][j] != initialColor) return;
    
    image[i][j] = newColor;
    dfs(i-1, j, initialColor, newColor, image);
    dfs(i+1, j, initialColor, newColor, image);
    dfs(i, j-1, initialColor, newColor, image);
    dfs(i, j+1, initialColor, newColor, image);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor){
    int initialColor = image[sr][sc];
    if(initialColor != newColor)
        dfs(sr, sc, initialColor, newColor, image);
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    
    
    

    return 0;
}
